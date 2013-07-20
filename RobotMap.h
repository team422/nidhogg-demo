#ifndef ROBOT_MAP_H
#define ROBOT_MAP_H

#include "WPILib.h"

const UINT8 ANALOG_MODULE_PORT = 1,
	        DIGITAL_MODULE_PORT = 1,
	        SOLENOID_MODULE_PORT = 1;

// PWM channels for the drivebase
const UINT32 LEFT_DRIVE_CHANNEL = 1,
	         RIGHT_DRIVE_CHANNEL = 2;

// Digital I/O ports for the drivebase
const UINT32 LEFT_DRIVE_ENCODER_CHANNEL_A = 1,
	         LEFT_DRIVE_ENCODER_CHANNEL_B = 2,
	         RIGHT_DRIVE_ENCODER_CHANNEL_A = 5,
	         RIGHT_DRIVE_ENCODER_CHANNEL_B = 6;


// LED Relay Ports
const UINT32 RED_RELAY_CHANNEL = 5;
const UINT32 BLUE_RELAY_CHANNEL = 3;
const UINT32 GREEN_RELAY_CHANNEL = 4;

#ifdef USE_GAMECUBE_CONTROLLER
const UINT32 GC_LEFT_X = 1,
	         GC_LEFT_Y = 2,
	         GC_C_STICK_X = 3,
	         GC_C_STICK_Y = 4;

const int GC_A     =  1,
	      GC_B     =  2,
	      GC_X     =  3,
	      GC_Y     =  4,
	      GC_L     =  5,
	      GC_R     =  6,
	      GC_Z     =  7,
	      GC_START =  8,
	      GC_LEFT  =  9,
	      GC_RIGHT = 10,
	      GC_DOWN  = 11,
	      GC_UP    = 12;
#endif

#endif // ROBOT_MAP_H
