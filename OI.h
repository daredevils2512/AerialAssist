// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef OI_H
#define OI_H
#include "WPILib.h"
class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Joystick* joystick2;
	JoystickButton* scoopWheelBackwardButton;
	JoystickButton* scoopWheelForewardButton;
	JoystickButton* shootSlowButton;
	JoystickButton* shootFastButton;
	JoystickButton* angleUpButton;
	JoystickButton* angleDownButton;
	Joystick* joystick1;
	JoystickButton* button1Released;
	JoystickButton* button1Pressed;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	
	JoystickButton* trussAngleButton;
	JoystickButton* goalAngleButton;
	JoystickButton* floorAngleButton;
	
public:
	OI();
	SendableChooser* chooser;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
	Joystick* getJoystick1();
	Joystick* getJoystick2();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
	float GetLYAxis();
	float GetRXAxis();
};
#endif
