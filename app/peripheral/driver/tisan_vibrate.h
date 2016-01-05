/*
 * tisan_vibrate.h
 *
 *  Created on: 2015��10��29��
 *      Author: Administrator
 */

#ifndef APP_PERIPHERAL_DRIVER_TISAN_VIBRATE_H_
#define APP_PERIPHERAL_DRIVER_TISAN_VIBRATE_H_

#include "key_base.h"

#ifndef VIBRATE_GPIO_ID
#define VIBRATE_GPIO_ID   12
#endif

extern uint32 g_vibrate_high_counter;
extern uint32 g_vibrate_low_counter;

//extern void peri_vibrate_timer_start(uint16 delay_ms);

void alarm_init(uint8 gpio_id);
void vibrate_cb(struct base_key_param *single_key);

#endif /* APP_PERIPHERAL_DRIVER_TISAN_VIBRATE_H_ */
