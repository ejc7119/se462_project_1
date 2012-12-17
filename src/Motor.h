/*
 * Motor.h
 *
 *  Created on: Dec 12, 2012
 *      Author: axs6985
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "States.h"

class Motor{
private:

public:
	States current;
	States motor_up();
	States motor_down();
	States motor_stop();
};

#endif /* MOTOR_H_ */
