/* *************************************************************************
* File Name   :	Receiver_DataCalc.h
* Description : Header file for Data Calcualtions like Mini, Max & Average
* ************************************************************************* */
#ifndef RECEIVER_DATACALC_H
#define RECEIVER_DATACALC_H
#pragma once
#include "stdbool.h"

/* ******************************* Defines ******************************* */

static int rv_array[20];
static char rv_data[500];

/* ***************************** Prototypes ***************************** */
int Calc_Maxi(int Val_Arr[]);
int Calc_Mini(int Val_Arr[]);
float Calc_Average(int Val_Arr[]);

void readfromconsole();
bool compareDataFromStream(int send_data[],int receive_data[]);
bool compareMaxDataFromStream(int send_data[],int receive_data[]);
bool compareMinDataFromStream(int send_data[],int receive_data[]);
bool compareAverageDataFromStream(int send_data[],int receive_data[]);

#endif
