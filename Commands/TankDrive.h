/**
 * @file CheesyDrive.h
 * @brief Declaration of the CheesyDrive command
 * @author William Kunkel
 */

#ifndef TANK_DRIVE_H
#define TANK_DRIVE_H

#include "../CommandBase.h"

class TankDrive: public CommandBase {
public:
	TankDrive();
	void Initialize() {};
	void Execute();
	bool IsFinished();
	void End() {};
	void Interrupted() {};
private:
	float valueWithDeadzone( float, float );

	static const float DEADZONE;
	static const float SPEED_REDUCTION;
};

#endif // TANK_DRIVE_H
