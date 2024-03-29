// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::driveTrainLeftDriveMotor = NULL;
SpeedController* RobotMap::driveTrainRightDriveMotor = NULL;
RobotDrive* RobotMap::driveTrainRobotDrive = NULL;
Encoder* RobotMap::driveTrainLeftEncoder = NULL;
Encoder* RobotMap::driveTrainRightEncoder = NULL;
Gyro* RobotMap::driveTrainGyro = NULL;
Solenoid* RobotMap::driveTrainShiftSolenoid1 = NULL;
Solenoid* RobotMap::driveTrainShiftSolenoid2 = NULL;
SpeedController* RobotMap::shooterShooterMotor = NULL;
DigitalInput* RobotMap::shooterLightSensor = NULL;
Solenoid* RobotMap::shooterReleaseSolenoid1 = NULL;
Solenoid* RobotMap::shooterReleaseSolenoid2 = NULL;
SpeedController* RobotMap::trunnionArmMotor = NULL;
AnalogChannel* RobotMap::trunnionArmAngle = NULL;
SpeedController* RobotMap::trunnionArmMotor2 = NULL;
Solenoid* RobotMap::clawClawSolenoid = NULL;
SpeedController* RobotMap::clawScoopWheel = NULL;
Relay* RobotMap::clawLEDLEDControl = NULL;
DigitalInput* RobotMap::clawLEDLEDPhotoEye = NULL;
Compressor* RobotMap::robotCompressorOffboardCompressor = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	driveTrainLeftDriveMotor = new Talon(1, 2);
	lw->AddActuator("DriveTrain", "LeftDriveMotor", (Talon*) driveTrainLeftDriveMotor);
	
	driveTrainRightDriveMotor = new Talon(1, 1);
	lw->AddActuator("DriveTrain", "RightDriveMotor", (Talon*) driveTrainRightDriveMotor);
	
	driveTrainRobotDrive = new RobotDrive(driveTrainLeftDriveMotor, driveTrainRightDriveMotor);
	
	driveTrainRobotDrive->SetSafetyEnabled(true);
        driveTrainRobotDrive->SetExpiration(0.1);
        driveTrainRobotDrive->SetSensitivity(0.5);
        driveTrainRobotDrive->SetMaxOutput(1.0);
        
	driveTrainLeftEncoder = new Encoder(1, 3, 1, 4, false, Encoder::k4X);
	lw->AddSensor("DriveTrain", "LeftEncoder", driveTrainLeftEncoder);
	driveTrainLeftEncoder->SetDistancePerPulse(1.0);
        driveTrainLeftEncoder->SetPIDSourceParameter(Encoder::kRate);
        driveTrainLeftEncoder->Start();
	driveTrainRightEncoder = new Encoder(1, 1, 1, 2, false, Encoder::k4X);
	lw->AddSensor("DriveTrain", "RightEncoder", driveTrainRightEncoder);
	driveTrainRightEncoder->SetDistancePerPulse(1.0);
        driveTrainRightEncoder->SetPIDSourceParameter(Encoder::kRate);
        driveTrainRightEncoder->Start();
	driveTrainGyro = new Gyro(1, 1);
	lw->AddSensor("DriveTrain", "Gyro", driveTrainGyro);
	driveTrainGyro->SetSensitivity(0.007);
	driveTrainShiftSolenoid1 = new Solenoid(1, 1);
	lw->AddActuator("DriveTrain", "ShiftSolenoid1", driveTrainShiftSolenoid1);
	
	driveTrainShiftSolenoid2 = new Solenoid(1, 2);
	lw->AddActuator("DriveTrain", "ShiftSolenoid2", driveTrainShiftSolenoid2);
	
	shooterShooterMotor = new Talon(1, 6);
	lw->AddActuator("Shooter", "ShooterMotor", (Talon*) shooterShooterMotor);
	
	shooterLightSensor = new DigitalInput(1, 5);
	lw->AddSensor("Shooter", "LightSensor", shooterLightSensor);
	
	shooterReleaseSolenoid1 = new Solenoid(1, 3);
	lw->AddActuator("Shooter", "ReleaseSolenoid1", shooterReleaseSolenoid1);
	
	shooterReleaseSolenoid2 = new Solenoid(1, 4);
	lw->AddActuator("Shooter", "ReleaseSolenoid2", shooterReleaseSolenoid2);
	
	trunnionArmMotor = new Talon(1, 3);
	lw->AddActuator("Trunnion", "ArmMotor", (Talon*) trunnionArmMotor);
	
	trunnionArmAngle = new AnalogChannel(1, 4);
	lw->AddSensor("Trunnion", "ArmAngle", trunnionArmAngle);
	
	trunnionArmMotor2 = new Talon(1, 4);
	lw->AddActuator("Trunnion", "ArmMotor2", (Talon*) trunnionArmMotor2);
	
	clawClawSolenoid = new Solenoid(1, 5);
	lw->AddActuator("Claw", "ClawSolenoid", clawClawSolenoid);
	
	clawScoopWheel = new Talon(1, 5);
	lw->AddActuator("Claw", "ScoopWheel", (Talon*) clawScoopWheel);
	
	clawLEDLEDControl = new Relay(1, 2);
	lw->AddActuator("ClawLED", "LEDControl", clawLEDLEDControl);
	
	clawLEDLEDPhotoEye = new DigitalInput(1, 6);
	lw->AddSensor("ClawLED", "LEDPhotoEye", clawLEDLEDPhotoEye);
	
	robotCompressorOffboardCompressor = new Compressor(1, 7, 1, 1);
	
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
