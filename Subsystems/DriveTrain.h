#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem {
private:
	
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	
	DriveTrain();
	
	void InitDefault();
	
	void Drive();
	
	void ShiftUp();
	
	void ShiftDown();
	
	void Stop();
	
	void GetIsHigh();
};

#endif
