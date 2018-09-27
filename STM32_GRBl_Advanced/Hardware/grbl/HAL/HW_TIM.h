/*
  TIM.h - Timer Header
  Part of STM32F4_HAL

  Copyright (c)	2017 Patrick F.

  STM32F4_HAL is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  STM32F4_HAL is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  You should have received a copy of the GNU General Public License
  along with STM32F4_HAL.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef TIM_H_INCLUDED
#define TIM_H_INCLUDED

#include "tim.h"

#define STEP_TIMER htim4
#define STEP_TIMER_CHANNEL TIM_CHANNEL_1
#define SPINDLE_TIMER htim3
#define SPINDLE_TIMER_CHANNEL TIM_CHANNEL_4


#ifdef __cplusplus
extern "C" {
#endif


//void TIM1_Init(void);
//void TIM9_Init(void);
void Stepper_Timer_init(void);
void Spindle_Timer_init(void);


#ifdef __cplusplus
}
#endif


#endif /* TIM_H_INCLUDED */
