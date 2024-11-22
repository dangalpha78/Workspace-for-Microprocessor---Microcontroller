/*
 * timer.c
 *
 *  Created on: Nov 10, 2024
 *      Author: admin
 */

#include "main.h"
#include "sched.h"

void HAL_TIM_PeriodElapsedCallback (TIM_HandleTypeDef *htim ) {
	if(htim->Instance == TIM2){
		SCH_Update();
	}
}
