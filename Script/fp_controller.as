class AFPPlayerCamera : APlayerCameraManager
{
    UPROPERTY()
    float CameraWorldYawAngle = 45.f;
    float CameraHeight = 300.f;
    float CameraDistance = 400.f;

    UFUNCTION(BlueprintOverride)
    bool BlueprintUpdateCamera(AActor inActor, FVector& Loc, FRotator& Rot, float32& pov)
    {
        if (GetOwningPlayerController() == nullptr || GetOwningPlayerController().GetControlledPawn() == nullptr)
        {
            return false;
        }

        pov = 90.f;

        APawn PawnRef = GetOwningPlayerController().GetControlledPawn();

        FVector LookAtLoc = PawnRef.GetActorLocation();
        Loc = LookAtLoc + FVector::ForwardVector.RotateAngleAxis(CameraWorldYawAngle, FVector(0,0,1))*CameraDistance + FVector(0,0,CameraHeight);

        FVector RotDir = LookAtLoc - FVector(Loc);
        Rot = RotDir.Rotation();


        return true;
    }
}

class AFPController : APlayerController
{

    //input stuff

    UPROPERTY(DefaultComponent)
    protected UEnhancedInputComponent NewIC;

    UPROPERTY()
    private UInputMappingContext MovementContext;

    UPROPERTY()
    private UInputAction IAMoveF;

    UPROPERTY()
    private UInputAction IAMoveR;

    UPROPERTY()
    private UInputAction IAActionCameraMove;

    UFUNCTION(BlueprintOverride)
    void ConstructionScript()
    {
        UObject MovementContextObj = LoadObject(this, "/Script/EnhancedInput.InputMappingContext'/Game/Input/IC_FPS.IC_FPS'");
        UObject MoveFBObject = LoadObject(this, "/Script/EnhancedInput.InputAction'/Game/Input/IA_MoveF.IA_MoveF'");
        UObject MoveRLObject = LoadObject(this, "/Script/EnhancedInput.InputAction'/Game/Input/IA_MoveR.IA_MoveR'");
        UObject MoveACameraObject = LoadObject(this, "/Script/EnhancedInput.InputAction'/Game/Input/IA_CameraMoveXY.IA_CameraMoveXY'");
        
        if(MovementContextObj != nullptr)
        {
            MovementContext = Cast<UInputMappingContext>(MovementContextObj);
        }

        if(MoveFBObject != nullptr)
        {
            IAMoveF = Cast<UInputAction>(MoveFBObject);
            IAMoveR = Cast<UInputAction>(MoveRLObject);
            IAActionCameraMove = Cast<UInputAction>(MoveACameraObject);
        }
    }

    UFUNCTION(BlueprintOverride)
    void BeginPlay()
    {

        PushInputComponent(NewIC);
        UEnhancedInputLocalPlayerSubsystem InputSubsystem = UEnhancedInputLocalPlayerSubsystem::Get(this);
    
        InputSubsystem.AddMappingContext(MovementContext, 0, FModifyContextOptions());
        

        NewIC.BindAction(IAMoveF, ETriggerEvent::Triggered, FEnhancedInputActionHandlerDynamicSignature(this, n"MoveFB"));
        NewIC.BindAction(IAMoveR, ETriggerEvent::Triggered, FEnhancedInputActionHandlerDynamicSignature(this, n"MoveRL"));
        NewIC.BindAction(IAActionCameraMove, ETriggerEvent::Triggered, FEnhancedInputActionHandlerDynamicSignature(this, n"MoveCameraXY"));

        
    }

    UFUNCTION()
    void MoveCameraXY(FInputActionValue ActionValue, float32 ElapsedTime, float32 TriggeredTime, const UInputAction SourceAction)
    {
        APawn MyPawn = GetControlledPawn();
        
        if(MyPawn != nullptr)
        {
            AddYawInput(ActionValue.GetAxis2D().X);
            AddPitchInput(ActionValue.GetAxis2D().Y);
        }
    }

    UFUNCTION()
    void MoveFB(FInputActionValue ActionValue, float32 ElapsedTime, float32 TriggeredTime, const UInputAction SourceAction)
    {
        APawn MyPawn = GetControlledPawn();
        
        if(MyPawn != nullptr)
        {
            MyPawn.GetMovementComponent().AddInputVector(
                PlayerCameraManager.GetCameraRotation().GetForwardVector() * ActionValue.GetAxis1D()
            );
        }
    }

    UFUNCTION()
    void MoveRL(FInputActionValue ActionValue, float32 ElapsedTime, float32 TriggeredTime, const UInputAction SourceAction)
    {
        APawn MyPawn = GetControlledPawn();
        
        if(MyPawn != nullptr)
        {
            MyPawn.GetMovementComponent().AddInputVector(
                PlayerCameraManager.GetCameraRotation().GetRightVector() * ActionValue.GetAxis1D()
            );
        }
    }
}

class AFPGameMode : AGameModeBase
{
    default this.PlayerControllerClass = AFPController::StaticClass();
}