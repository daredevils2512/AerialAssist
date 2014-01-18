#include "OI.h"

OI::OI() {
	// Process operator interface input here.
	stick2 = new Joystick(2);
}

bool OI::GetAngleUpButton() {
	return stick2.GetRawButton(1);
}
