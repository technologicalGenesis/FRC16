/*
 * DriveTrain.cpp
 *
 *  Created on: Feb 1, 2016
 *      Author: Benjamin
 */

#include <Subsystems/Drivetrain.h>
#include "../RobotMap.h"

Drivetrain::Drivetrain(RobotDrive drive): Subsystem("DriveTrain") {
	robot = &drive;
}

void Drivetrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void Drivetrain::drive(float lSpeed, float rSpeed) {
	//should be constantly getting speed inputs from the controller
	robot->SetLeftRightMotorOutputs(lSpeed, rSpeed);
}
