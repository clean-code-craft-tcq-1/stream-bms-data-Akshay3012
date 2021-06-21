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
float Calc_Maxi();
float Calc_Mini(float current_value, float prev_mini);
float Calc_Average(float Val_Arr[], int NoOfValues);

void readfromconsole();
bool compareDataFromStream(int send_data[],int receive_data[]);

#endif
