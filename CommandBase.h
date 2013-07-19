#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/Drive.h"
#include "Subsystems/Lights.h"
#include "OI.h"

class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();

protected:
	static Drive *drive;
	// The robot's LEDs
	static Lights *lights;
	static OI *operatorInterface;
};

#endif // COMMAND_BASE_H
