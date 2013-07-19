#ifndef DRIVE_H
#define DRIVE_H

#include "WPILib.h"

class Drive: public Subsystem {
public:
	Drive();
	void InitDefaultCommand();
	void setMotors( float leftSpeed, float rightSpeed );

private:
	Talon *leftMotor, *rightMotor;
};

#endif // DRIVE_H
