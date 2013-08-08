/*
 *    Created on: 08-08-2013
 *        Author: Michal Ksiezopolski
 * Last modified: 08-08-2013
 */

#include "common/common.h"

/**
 *
 */
int main(void) {


	SysTickInit(1000);
	STM_EVAL_LEDInit(LED3);
	STM_EVAL_LEDInit(LED4);

    while(1) {
    	STM_EVAL_LEDToggle(LED4);
    	STM_EVAL_LEDToggle(LED3);
    	_delay_ms(500);
    }
}
