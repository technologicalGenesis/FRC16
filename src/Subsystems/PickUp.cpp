#include "PickUp.h"
#include "../RobotMap.h"

PickUp::PickUp(): Subsystem("PickUp"){
	motors = new Talon(RobotMap::);


}

void PickUp::Start() {
	motors->Set(1);
}
void PickUp::Stop() {
	motors->Set(0);
}
