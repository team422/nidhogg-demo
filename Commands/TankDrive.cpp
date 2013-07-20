#include "WPILib.h"
#include "TankDrive.h"
#include "../RobotMap.h"

const float TankDrive::DEADZONE = 0.1;
const float TankDrive::SPEED_REDUCTION = 0.3;

TankDrive::TankDrive() {
	Requires(drive);
}

void TankDrive::Execute() {

		float left = operatorInterface
					 ->getLeftPrimaryJoystick()
					 ->GetY();
		float right = operatorInterface
					  ->getRightPrimaryJoystick()
					  ->GetY();
		
		left = valueWithDeadzone( left, DEADZONE );
		right = valueWithDeadzone( right, DEADZONE );
		
		left *= SPEED_REDUCTION;
		right *= SPEED_REDUCTION;

		drive->setMotors( left, right );
}

bool TankDrive::IsFinished() {
	return false;
}

float TankDrive::valueWithDeadzone( float value, const float deadzone ) {
	if( deadzone >= 1 ) {
		return 0.0;
	}

	if( value > 0.0) {
   		value = (value - deadzone) / (1.0 - deadzone);
		if (value < 0.0) {
			value = 0.0;
		}
	}
	else {
		value = (value + deadzone) / (1.0 - deadzone);
		if (value > 0.0) {
			value = 0.0;
		}
	}

	return value;
}
