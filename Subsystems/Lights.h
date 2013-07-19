#ifndef LIGHTS_H
#define LIGHTS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lights: public Subsystem {
public:
	/// Constructor for the Lights
	Lights();

	void toggleRedLight();
	void toggleGreenLight();
	void toggleBlueLight();

	void turnOffRedLight();
	void turnOffGreenLight();
	void turnOffBlueLight();
	
	void turnOnRedLight();
	void turnOnGreenLight();
	void turnOnBlueLight();

private:
	Relay *redLight;
	Relay *greenLight;
	Relay *blueLight;
};

#endif //LIGHTS_H
