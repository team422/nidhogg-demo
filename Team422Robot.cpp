#include "Team422Robot.h"

void Team422Robot::RobotInit() {
	CommandBase::init();
	dashboard = DriverStationLCD::GetInstance();
}

void Team422Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

// Start the robot, the equivalent of the "main" function
START_ROBOT_CLASS(Team422Robot);
