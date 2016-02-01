/*
 * DriveTrain.cpp
 *
 *  Created on: Feb 1, 2016
 *      Author: Benjamin
 */

#include "ExampleSubsystem.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain(RobotDrive drive): robot(drive), Subsystem("DriveTrain") {

}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
