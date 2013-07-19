#include "ControlLights.h"
#include "WPILib.h"
#include "../Subsystems/Lights.h"
#include "../OI.h"

ControlLights::ControlLights(Color whichLight) :
	light( whichLight ) {
	Requires(lights);
}
void ControlLights::Initialize() {
	switch(light) {
		case RED:
			lights->toggleRedLight();
			break;
		case GREEN:
			lights->toggleGreenLight();
			break;
		case BLUE:
			lights->toggleBlueLight();
			break;
	}
}

bool ControlLights::IsFinished() {
	return true;
}
