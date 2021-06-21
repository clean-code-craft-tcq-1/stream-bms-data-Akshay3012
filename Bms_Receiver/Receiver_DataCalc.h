/* *************************************************************************
* File Name   :	Receiver_DataCalc.h
* Description : Header file for Data Calcualtions like Mini, Max & Average
* ************************************************************************* */
#ifndef RECEIVER_DATACALC_H
#define RECEIVER_DATACALC_H
#pragma once

/* ******************************* Defines ******************************* */

int stream[20];
char rv_data[500];

/* ***************************** Prototypes ***************************** */
float Calc_Maxi(float current_value, float prev_maxi);
float Calc_Mini(float current_value, float prev_mini);
float Calc_Average(float Val_Arr[], int NoOfValues);

void readfromconsole();
bool compareDataFromStream(char* send_data,char* receive_data);

#endif
