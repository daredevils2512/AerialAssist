#include "Shooter.h"
#include "../Robotmap.h"

Shooter::Shooter() : Subsystem("Shooter") {
	
}
    
void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Shooter::MoveAngleMotor(float velocity) {
	
}

double Shooter::GetAngle() {
	
}

void Shooter::SpinScoopWheel(float velocity) {
	
}

void Shooter::RetractShootingMechinism(bool go) {
	
}

bool Shooter::GetPhotoEye() {
	
}

void Shooter::ActivateScoopPnuematic(bool open) {
	
}