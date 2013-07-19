#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
public:
	OI();

	Joystick* getLeftPrimaryJoystick() { return leftPrimaryJoystick; }
	Joystick* getRightPrimaryJoystick() { return rightPrimaryJoystick; }

	Joystick* getSecondaryJoystick() { return secondaryJoystick; }

	// Underglow controls
	bool toggleRedButtonPressed() { return redButton->Get(); }
	bool toggleGreenButtonPressed() { return greenButton->Get(); }
	bool toggleBlueButtonPressed() { return blueButton->Get(); }

private:

	Joystick *leftPrimaryJoystick,
	         *rightPrimaryJoystick;
	
	Joystick *secondaryJoystick;

	JoystickButton *redButton,
	               *greenButton,
	               *blueButton;
};

#endif // OI_H
