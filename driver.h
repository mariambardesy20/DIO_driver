/*
 * driver.h
 *
 *  Created on: Nov 19, 2020
 *      Author: Vangard Vangard
 */

#ifndef DRIVER_H_
#define DRIVER_H_

#define myDDRC *((volatile unsigned char*)0x34)
#define myPORTC *((volatile unsigned char*)0x35)
#define myPINC *((volatile unsigned char*)0x33)
#define myDDRB *((volatile unsigned char*)0x37)
#define myPORTB *((volatile unsigned char*)0x38)
#define myPINB *((volatile unsigned char*)0x36)
#define myDDRA *((volatile unsigned char*)0x3A)
#define myPORTA *((volatile unsigned char*)0x3B)
#define myPINA *((volatile unsigned char*)0x39)
#define myDDRD *((volatile unsigned char*)0x31)
#define myPORTD *((volatile unsigned char*)0x32)
#define myPIND *((volatile unsigned char*)0x30)
void makeOutput(volatile unsigned char* reg,unsigned char bit);
void makeINput(volatile unsigned char* reg,unsigned char bit);
void outputHigh(volatile unsigned char* reg,unsigned char bit);
void OutputLow(volatile unsigned char* reg,unsigned char bit);
void turnOnPullup(volatile unsigned char* reg,unsigned char bit);
void turnOffPullup(volatile unsigned char* reg,unsigned char bit);
unsigned char readInput(volatile unsigned char* reg,unsigned char bit);
#endif /* DRIVER_H_ */
