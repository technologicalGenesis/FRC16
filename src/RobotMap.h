#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;

namespace RobotMap {
	const int FRONT_LEFT_MOTOR = 0;
	const int BACK_LEFT_MOTOR = 1;
	const int FRONT_RIGHT_MOTOR = 2;
	const int BACK_RIGHT_MOTOR = 3;
	const int RIGHT_SHOOTER_MOTOR = 4;
	const int LEFT_SHOOTER_MOTOR = 5;
	const int INTAKE_MOTOR = 6;
	const int LIFT_MOTOR = 7;
}

#endif
