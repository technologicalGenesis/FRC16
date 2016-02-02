#ifndef PickUp_H
#define PickUp_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class PickUp: Subsystem {

private:
public:
	Talon* motors;

	PickUp();

	void Start();
	void Stop();

};

#endif
