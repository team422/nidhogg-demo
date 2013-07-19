#ifndef CONTROLLIGHTS_H
#define CONTROLLIGHTS_H

#include "../CommandBase.h"

class ControlLights: public CommandBase {
public:
	enum Color {
		RED,
		GREEN,
		BLUE
	};
	
	ControlLights(Color whichLight);
	void Initialize();
	void Execute() {}
	bool IsFinished();
	void End() {}
	void Interrupted() {}
private:
	Color light;
};

#endif
