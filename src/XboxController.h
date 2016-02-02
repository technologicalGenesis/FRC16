/*
 * XboxController.h
 *
 *  Created on: Jan 21, 2016
 *      Author: Steven
 */

#ifndef SRC_XBOXCONTROLLER_H_
#define SRC_XBOXCONTROLLER_H_

#include "WPILib.h"
#include "Vector.h"

class XboxController {
public:

	int portNumber;

	XboxController(int port);
	virtual ~XboxController();

	Vector getLeftVector();
	Vector getRightVector();

private:

	Joystick* joystick;


};

#endif /* SRC_XBOXCONTROLLER_H_ */
