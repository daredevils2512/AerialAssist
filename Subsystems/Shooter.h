#ifndef SHOOTER_H
#define SHOOTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
/**
 *
 *
 * @author Loaner
 */
class Shooter: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon* reloadMotor;
	Talon* scoopWheelMotor;
	Talon* angleMotor;
	DigitalInput* shooterPhotoEye;
	AnalogChannel* shooterAnglePot;
	Solenoid* ScoopPnuematic;
	
public:
	Shooter();
	void InitDefaultCommand();
	void MoveAngleMotor(float velocity);
	double GetAngle();
	void SpinScoopWheel(float velocity);
	void RetractShootingMechinism();
	bool GetPhotoEye();
	void ActivateScoopPnuematic(bool open);
};

#endif
