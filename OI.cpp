// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AngleDown.h"
#include "Commands/AngleUp.h"
#include "Commands/AutoMove.h"
#include "Commands/CenterAuto.h"
#include "Commands/ClawClose.h"
#include "Commands/ClawOpen.h"
#include "Commands/Drive.h"
#include "Commands/GoToAngle.h"
#include "Commands/LeftAuto.h"
#include "Commands/Lock.h"
#include "Commands/NoClawShot.h"
#include "Commands/PullBack.h"
#include "Commands/Release.h"
#include "Commands/RightAuto.h"
#include "Commands/SetCameraForAuto.h"
#include "Commands/SetCameraForTeleop.h"
#include "Commands/ShiftDown.h"
#include "Commands/ShiftUp.h"
#include "Commands/StopMotors.h"
#include "Commands/TurnTo.h"
#include "Commands/Unlock.h"
#include "Commands/VisionCheck.h"
#include "Commands/VisionTrack.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
	
	chooser = new SendableChooser();
	chooser->AddDefault("Center", new CenterAuto());
	chooser->AddObject("Left", new LeftAuto());
	chooser->AddObject("Right", new RightAuto());
		
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	joystick2 = new Joystick(2);
	
	shootSlowButton = new JoystickButton(joystick2, 1);
	shootSlowButton->WhileHeld(new Release());
	shootFastButton = new JoystickButton(joystick2, 1);
	shootFastButton->WhenPressed(new NoClawShot());
	angleUpButton = new JoystickButton(joystick2, 1);
	angleUpButton->WhileHeld(new AngleUp());
	angleDownButton = new JoystickButton(joystick2, 1);
	angleDownButton->WhileHeld(new AngleDown());
	joystick1 = new Joystick(1);
	
	button1Released = new JoystickButton(joystick1, 1);
	button1Released->WhenReleased(new ShiftUp());
	button1Pressed = new JoystickButton(joystick1, 1);
	button1Pressed->WhenPressed(new ShiftDown());
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Drive", new Drive());
	SmartDashboard::PutData("ShiftUp", new ShiftUp());
	SmartDashboard::PutData("ShiftDown", new ShiftDown());
	SmartDashboard::PutData("StopMotors", new StopMotors());
	SmartDashboard::PutData("ClawOpen", new ClawOpen());
	SmartDashboard::PutData("ClawClose", new ClawClose());
	SmartDashboard::PutData("PullBack", new PullBack());
	SmartDashboard::PutData("Release", new Release());
	SmartDashboard::PutData("NoClawShot", new NoClawShot());
	SmartDashboard::PutData("AngleUp", new AngleUp());
	SmartDashboard::PutData("AngleDown", new AngleDown());
	SmartDashboard::PutData("Lock", new Lock());
	SmartDashboard::PutData("Unlock", new Unlock());
	SmartDashboard::PutData("VisionCheck", new VisionCheck());
	SmartDashboard::PutData("SetCameraForTeleop", new SetCameraForTeleop());
	SmartDashboard::PutData("SetCameraForAuto", new SetCameraForAuto());
	SmartDashboard::PutData("VisionTrack", new VisionTrack());
	SmartDashboard::PutData("LeftAuto", new LeftAuto());
	SmartDashboard::PutData("RightAuto", new RightAuto());
	SmartDashboard::PutData("CenterAuto", new CenterAuto());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	SmartDashboard::PutData("Autonomous Chooser", chooser);
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getJoystick2() {
	return joystick2;
}
Joystick* OI::getJoystick1() {
	return joystick1;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
