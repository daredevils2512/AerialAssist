// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Trunnion.h"
#include "../Robotmap.h"
const double Trunnion::MAX = 100;
const double Trunnion::MIN = -100;
Trunnion::Trunnion() : Subsystem("Trunnion") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	armMotor = RobotMap::trunnionArmMotor;
	armAngle = RobotMap::trunnionArmAngle;
	brake = RobotMap::trunnionBrake;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Trunnion::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
void Trunnion::ChangeAngle(AngleDirection angleDirection) {
	switch (angleDirection) {
	case UP:
		if(GetAngle() < MAX) {
			armMotor->Set(1.0f);
		}
		else {
			Stop();
		}
		break;
	case DOWN:
		if(GetAngle() > MIN) {
			armMotor->Set(-1.0f);
		}
		else {
			Stop();
		}
		break;
	case STOP:
		Stop();
		break;
	default:
		// TODO: Log Errors
		break;
	}
}
void Trunnion::Lock(bool lock) {
	brake->Set(lock);
}
void Trunnion::Stop() {
	armMotor->Set(0.0f);
}
float Trunnion::GetAngle() {
	return armAngle->GetAverageVoltage(); //TODO: Convert to degrees
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
