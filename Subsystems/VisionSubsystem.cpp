// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "VisionSubsystem.h"
#include "../Robotmap.h"
VisionSubsystem::VisionSubsystem() : Subsystem("VisionSubsystem") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	vision = new VisionSample2014();
}
    
void VisionSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
bool VisionSubsystem::Calculate() {
	return vision->ProcessImage();
}
void VisionSubsystem::SetToTeleop() {
	camera->WriteBrightness(100);
}
void VisionSubsystem::SetToAutonomous() {
	camera->WriteBrightness(0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
