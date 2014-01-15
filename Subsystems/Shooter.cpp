#include "Shooter.h"
#include "../RobotMap.h"

Shooter::Shooter() : Subsystem("Shooter") {
	reloadMotor = new Talon(1, 1);
	scoopWheelMotor = new Talon(1, 1);
	angleMotor = new Talon(1, 1);
	shooterPhotoEye = new DigitalInput(1, 1);
	shooterAnglePot = new AnalogChannel(1, 1);
	ScoopPnuematic = new Solenoid(1, 1);
}
    
void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Shooter::MoveAngleMotor(float velocity) {
	if(velocity >= -1 && velocity <= 1) {
		angleMotor->Set(velocity);
	} else {
		angleMotor->Set(0);
	}
}

double Shooter::GetAngle() {
	return shooterAnglePot->GetAverageVoltage();
}

void Shooter::SpinScoopWheel(float velocity) {
	if(velocity >= -1 && velocity <= 1) {
		scoopWheelMotor->Set(velocity);
	} else {
		scoopWheelMotor->Set(0);
	}
}

void Shooter::RetractShootingMechinism() {
	scoopWheelMotor->Set(-1);
}

bool Shooter::GetPhotoEye() {
	return shooterPhotoEye->Get();
}

void Shooter::ActivateScoopPnuematic(bool open) {
	ScoopPnuematic->Set(open);
}
