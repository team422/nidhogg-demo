#include "Drive.h"
#include "../RobotMap.h"
#include "../Commands/TankDrive.h"

Drive::Drive() : 
	Subsystem("Drive"),
	leftMotor( new Talon( DIGITAL_MODULE_PORT,
	                                LEFT_DRIVE_CHANNEL ) ),
	rightMotor( new Talon( DIGITAL_MODULE_PORT,
	                                RIGHT_DRIVE_CHANNEL ) ) {
	leftMotor->Set(0.0);
	rightMotor->Set(0.0);
}

void Drive::InitDefaultCommand() {
	SetDefaultCommand( new TankDrive() );
}

void Drive::setMotors( float leftSpeed, float rightSpeed ) {
	leftMotor->Set( leftSpeed );
	rightMotor->Set( -rightSpeed );
}
