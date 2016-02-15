#include "WPILib.h"
#include "XboxController.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/BallCollector.h"

class Robot: public IterativeRobot {
private:
	std::unique_ptr<XboxController> controller;
	std::unique_ptr<RobotDrive> robot_drive;
	std::unique_ptr<Shooter> shooter;
	std::unique_ptr<BallCollector> ball_collector;

	void RobotInit() {
		// Initialize Subsystems
		controller = std::unique_ptr<XboxController>(new XboxController(0));
		robot_drive = std::unique_ptr<RobotDrive> (new RobotDrive(1,2,3,4));
		shooter = std::unique_ptr<Shooter> (new Shooter());
		ball_collector = std::unique_ptr<BallCollector> (new BallCollector());
	}

	void DisabledInit() {
	}

	void DisabledPeriodic() {
		Scheduler::GetInstance()->Run();
	}

	void AutonomousInit() {

	}

	void AutonomousPeriodic() {

	}

	void TeleopInit() {

	}

	void TeleopPeriodic() {
		std::unique_ptr<Vector> left_stick_vector = std::unique_ptr<Vector>(controller->GetLeftVector());
		std::unique_ptr<Vector> right_stick_vector = std::unique_ptr<Vector>(controller->GetRightVector());

		robot_drive->TankDrive(left_stick_vector->magnitude, right_stick_vector->magnitude, false);

		if (controller->GetTrigger(controller->RightTrigger,controller->RightTriggerOffset) >= 0.5){
			shooter->run_shooter();
		}else{
			shooter->stop_shooter();
		}

		if (controller->GetTrigger(controller->LeftTrigger,controller->LeftTriggerOffset) >= 0.5){
			ball_collector->Start();
		}else{
			ball_collector->Stop();
		}
	}

	void TestPeriodic() {

	}
};

START_ROBOT_CLASS(Robot)

