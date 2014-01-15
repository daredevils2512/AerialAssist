#include "OI.h"
#include <cmath>

OI::OI() {
	// Process operator interface input here.
	joyDrv = new Joystick(1);
}

float OI::GetJoyDrvX() {
	return ConvertAxis(joyDrv->GetX());
}

float OI::GetJoyDrvY() {
	return ConvertAxis(joyDrv->GetY());
}

float OI::ConvertAxis(float input) {
	if(fabs(input) <= 0.08) {
		return 0;
	}
	else {
		return input;
	}
}
