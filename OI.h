#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
		
	public:
		OI();
	
		float GetJoyDrvX();
		float GetJoyDrvY();
	private:
			Joystick *joyDrv;		
			float ConvertAxis(float input);
};

#endif
