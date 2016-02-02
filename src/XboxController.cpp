/*
 * XboxController.cpp
 *
 *  Created on: Jan 21, 2016
 *      Author: Steven
 */

#include "XboxController.h"
#include "Math.h"

#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481

Vector XboxController::getLeftVector(){
	float x = joystick->GetRawAxis(0);
	//GetRawAxis(x);

	float y = joystick->GetRawAxis(1);

	float degrees = atan2(y,x);


	float magnitude = sqrt(x*x+y*y);

	return (magnitude, degrees);

}
Vector XboxController::getRightVector(){

}


XboxController::XboxController(int port) {

	portNumber = port;
	joystick = new Joystick (port);



}

XboxController::~XboxController() {
	// TODO Auto-generated destructor stub
}

