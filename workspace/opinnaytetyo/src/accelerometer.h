/*
 * accelerometer.h
 *
 *  Created on: 23.11.2017
 *      Author: Markkula
 */

#ifndef ACCELEROMETER_H_
#define ACCELEROMETER_H_

void I2CInit( void );
void sendData(unsigned int address, unsigned int data);

void xAxisAccelerometer(unsigned char *xAxisArray);
void yAxisAccelerometer(unsigned char *yAxisArray);
void zAxisAccelerometer(unsigned char *zAxisArray);

void xAxisGyroscope(unsigned char *xAxisArray);
void yAxisGyroscope(unsigned char *yAxisArray);
void zAxisGyroscope(unsigned char *zAxisArray);

unsigned char readStatusRegisterAcc (unsigned char accStatus);
unsigned char readStatusRegisterGyro(unsigned char gyroStatus);

void initializeBrakePowerArray();
int whoIAm(int a);
void _delay_ms (uint16_t ms);

float map(float output ,float input_start, float input_end, float output_start, float output_end);

/****************************************************************************************************/

/*Read and Write addresses of the sensor LSM6DSM (SA0 = 0V)*/
#define readAddress 0xD5
#define writeAddress 0xD4

/*Vanha sensori*/
//#define readAddress 0x39
//#define writeAddress 0x38
/****************************************************************************************************/

/*Control registers of Accelerometer and Gyroscope*/
#define CTRL1_XL 0x10 // Linear acceleration sensor control register
#define CTRL2_G 0x11  // Angular rate sensor control register
#define CTRL3_C 0x12  // Register that contains Block Data Update
					  // Output registers not updated until MSB and LSB have been read

#define CTRL8_XL 0x17

#define INT1_CTRL 0x0D
#define STATUS_REG 0x1E

/****************************************************************************************************/

/*X -axis of accelerometer*/
#define OUTX_L_XL 0x28 // Linear acceleration sensor X-axis output register (Least significant part)
#define OUTX_H_XL 0x29 // Linear acceleration sensor X-axis output register (Most significant part)

/*Y -axis of accelerometer*/
#define OUTY_L_XL 0x2A // Linear acceleration sensor Y-axis output register (Least significant part)
#define OUTY_H_XL 0x2B // Linear acceleration sensor Y-axis output register (Most significant part)

/*Z -axis of accelerometer*/
#define OUTZ_L_XL 0x2C // Linear acceleration sensor Z-axis output register (Least significant part)
#define OUTZ_H_XL 0x2D // Linear acceleration sensor Z-axis output register (Most significant part)

/****************************************************************************************************/

/*X -axis of Angular rate sensor*/
#define OUTX_L_G 0x22 // Angular rate sensor X-axis output register (Least significant part)
#define OUTX_H_G 0x23 // Angular rate sensor X-axis output register (Most significant part)

/*Y -axis of Angular rate sensor*/
#define OUTY_L_G 0x24 // Angular rate sensor Y-axis output register (Least significant part)
#define OUTY_H_G 0x25 // Angular rate sensor Y-axis output register (Most significant part)

/*Z -axis of Angular rate sensor*/
#define OUTZ_L_G 0x26 // Angular rate sensor Z-axis output register (Least significant part)
#define OUTZ_H_G 0x27 // Angular rate sensor Z-axis output register (Most significant part)

/*****************************************************************************************************/

#define PCF8594_ADDR        0xA0

#define I2CMASTER           0x01
#define I2CSLAVE            0x02

#define I2CONCLR_AAC        (0x1<<2)    /* I2C Control clear Register */
#define I2CONCLR_SIC        (0x1<<3)
#define I2CONCLR_STAC       (0x1<<5)
#define I2CONCLR_I2ENC      (0x1<<6)

#define I2SCLH_SCLH         0x00000180  /* I2C SCL Duty Cycle High Reg */
#define I2SCLL_SCLL         0x00000180  /* I2C SCL Duty Cycle Low Reg */

#define I2CONSET_I2EN       (0x1<<6)    /* I2C Control Set Register */
#define I2CONSET_AA         (0x1<<2)
#define I2CONSET_SI         (0x1<<3)
#define I2CONSET_STO        (0x1<<4)
#define I2CONSET_STA        (0x1<<5)

#endif /* ACCELEROMETER_H_ */
