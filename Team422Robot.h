#include "WPILib.h"
//#include "Commands/Command.h"

#include "CommandBase.h"

class Team422Robot : public IterativeRobot {
private:
	DriverStationLCD *dashboard;
	LiveWindow *liveWindow;

	void RobotInit();
	void TeleopPeriodic();
};
