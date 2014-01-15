#include "Robotmap.h"


Talon* RobotMap::rightMotor = NULL;
Talon* RobotMap::leftMotor = NULL;
RobotDrive* RobotMap::myRobot = NULL;

void RobotMap::init() {
	rightMotor = new Talon(1, 1);
	leftMotor = new Talon(1, 1);
	myRobot = new RobotDrive(leftMotor, rightMotor);
	
	//ShooterObjects
	/*reloadMotor = new Talon(1, 1);
	scoopWheelMotor = new Talon(1, 1);
	angleMotor = new Talon(1, 1);
	shooterPhotoEye = new DigitalInput(1, 1);
	shooterAnglePot = new AnalogChannel(1, 1);*/
}
