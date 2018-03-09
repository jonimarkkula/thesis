/*
 * ledSetup.h
 *
 *  Created on: 9.11.2017
 *      Author: Markkula
 */

#ifndef LEDSETUP_H_
#define LEDSETUP_H_

void setLedPinsOutput();
void turnLedsOff();
void turnLedsOn(float brakePower);
void turnLedsOnAfterCalibration();

void correct_for_gravity();

/*I2C SA0*/
#define I2C_SA0 0, 21, 1


/*DEFINE LED1_L ON's*/
#define LED1_L_ON 1, 24, 1
#define LED2_L_ON 0, 6, 1
#define LED3_L_ON 0, 7, 1
#define LED4_L_ON 1, 28, 1
#define LED5_L_ON 1, 31, 1
#define LED6_L_ON 1, 21, 1
#define LED7_L_ON 0, 8, 1
#define LED8_L_ON 0, 22, 1
#define LED9_L_ON 1, 29, 1
#define LED10_L_ON 0, 11, 1
#define LED11_L_ON 0, 12, 1
#define LED12_L_ON 0, 13, 1


/*DEFINE LED1_R ON's*/
#define LED1_R_ON 0, 14, 1
#define LED2_R_ON 1, 13, 1
#define LED3_R_ON 1, 14, 1
#define LED4_R_ON 1, 22, 1
#define LED5_R_ON 0, 16, 1
#define LED6_R_ON 0, 23, 1
#define LED7_R_ON 1, 15, 1
#define LED8_R_ON 0, 17, 1
#define LED9_R_ON 0, 18, 1
#define LED10_R_ON 0, 19, 1
#define LED11_R_ON 1, 16, 1
#define LED12_R_ON 1, 25, 1

/*DEFINE LED1_L OFF's*/
#define LED1_L_OFF 1, 24, 0
#define LED2_L_OFF 0, 6, 0
#define LED3_L_OFF 0, 7, 0
#define LED4_L_OFF 1, 28, 0
#define LED5_L_OFF 1, 31, 0
#define LED6_L_OFF 1, 21, 0
#define LED7_L_OFF 0, 8, 0
#define LED8_L_OFF 0, 22, 0
#define LED9_L_OFF 1, 29, 0
#define LED10_L_OFF 0, 11, 0
#define LED11_L_OFF 0, 12, 0
#define LED12_L_OFF 0, 13, 0

/*DEFINE LED1_R OFF's*/
#define LED1_R_OFF 0, 14, 0
#define LED2_R_OFF 1, 13, 0
#define LED3_R_OFF 1, 14, 0
#define LED4_R_OFF 1, 22, 0
#define LED5_R_OFF 0, 16, 0
#define LED6_R_OFF 0, 23, 0
#define LED7_R_OFF 1, 15, 0
#define LED8_R_OFF 0, 17, 0
#define LED9_R_OFF 0, 18, 0
#define LED10_R_OFF 0, 19, 0
#define LED11_R_OFF 1, 16, 0
#define LED12_R_OFF 1, 25, 0

#endif /* LEDSETUP_H_ */
