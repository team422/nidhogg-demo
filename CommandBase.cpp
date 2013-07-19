#include "CommandBase.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {}

CommandBase::CommandBase() : Command() {}

Drive* CommandBase::drive = 0;
Lights* CommandBase::lights = 0;
OI* CommandBase::operatorInterface = 0;

void CommandBase::init() {
	drive = new Drive();
	lights = new Lights();
	operatorInterface = new OI();
}
