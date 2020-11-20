/*
 * driver.c
 *
 *  Created on: Nov 19, 2020
 *      Author: Vangard Vangard
 */

#include<stdio.h>
#include<stdlib.h>
#include"driver.h"
void makeOutput(volatile unsigned char* reg,unsigned char bit){reg |= (1<<bit);}
void makeINput(volatile unsigned char* reg,unsigned char bit){reg &= ~(1<<bit);}
void outputHigh(volatile unsigned char* reg,unsigned char bit){reg |= (1<<bit);}
void OutputLow(volatile unsigned char* reg,unsigned char bit){reg &= ~(1<<bit);}
void turnOnPullup(volatile unsigned char* reg,unsigned char bit){reg |= (1<<bit);}
void turnOffPullup(volatile unsigned char* reg,unsigned char bit){reg &= ~(1<<bit);}
unsigned char readInput(volatile unsigned char* reg,unsigned char bit){ return reg&(1<<bit);}
