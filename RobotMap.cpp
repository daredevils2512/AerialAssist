#include "Robotmap.h"


Talon* RobotMap::rightMotor = NULL;
Talon* RobotMap::leftMotor = NULL;
RobotDrive* RobotMap::myRobot = NULL;

void RobotMap::init() {
	rightMotor = new Talon(1, 1);
	leftMotor = new Talon(1, 1);
	
	myRobot = new RobotDrive(leftMotor, rightMotor);
	
}
