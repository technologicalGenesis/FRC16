/*
 * Shooter.cpp
 *
 *  Created on: Feb 1, 2016
 *      Author: Benjamin
 */

#include "Shooter.h"
#include "../RobotMap.h"

Shooter::Shooter() :Subsystem("Shooter") {
	lMotor=new Talon(5);
	rMotor=new Talon(4);
}

void Shooter::InitDefaultCommand() {

}

void Shooter::shoot() {
	//spins up the motors to shoot the ball
	lMotor->SetSpeed(1.0);
	rMotor->SetSpeed(1.0);
	//will need to stop the motors a few seconds after they're turned on
}

Shooter::~Shooter(){
	delete lMotor;
	delete rMotor;
}
