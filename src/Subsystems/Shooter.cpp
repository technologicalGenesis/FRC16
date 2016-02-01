/*
 * Shooter.cpp
 *
 *  Created on: Feb 1, 2016
 *      Author: Benjamin
 */

#include "Shooter.h"
#include "../RobotMap.h"

Shooter::Shooter(Talon shooterMotors) :Subsystem("Shooter") {
	motors = new Talon(shooterMotors);
}

void Shooter::InitDefaultCommand() {

}

void shoot() {
	motors->set(0.9);
}

Shooter::~Shooter(){

}
