/**
 * @file OI.cpp
 * @brief Implementation of the Operater Interface
 * @author Nyle Rodgers
 */

#include "OI.h"
#include "Commands/ControlLights.h"

#include "RobotMap.h"

/**
 * Initilize the Operator Interface.
 *
 * @author Nyle Rodgers
 * @author William Kunkel
 */
OI::OI():
	leftPrimaryJoystick( new Joystick(1) ),
	rightPrimaryJoystick( new Joystick(2) ),
	secondaryJoystick( new Joystick(3) ),
	
	// Secondary driver controls
#ifdef USE_GAMECUBE_CONTROLLER
	redButton( new JoystickButton( secondaryJoystick, GC_L ) ),
	greenButton( new JoystickButton( secondaryJoystick, GC_A ) ),
	blueButton( new JoystickButton( secondaryJoystick, GC_R ) )
#else
	redButton( new JoystickButton( secondaryJoystick, 2 ) ),
	greenButton( new JoystickButton( secondaryJoystick, 4 ) ),
	blueButton( new JoystickButton( secondaryJoystick, 3 ) )
#endif
{
	redButton->WhenPressed( new ControlLights(ControlLights::RED) );
	greenButton->WhenPressed( new ControlLights(ControlLights::GREEN) );
	blueButton->WhenPressed( new ControlLights(ControlLights::BLUE) );
}
