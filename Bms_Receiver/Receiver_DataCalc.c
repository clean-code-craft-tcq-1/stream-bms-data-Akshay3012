/* File Details ***********************************************************************************************
* File Name   : Receiver_DataCalc.c
* Author      : Arjun Sivakumar
* Description : Data calculations like Minimum, Maximum & Average for given numbers
* Functions   : Calc_Maxi, Calc_Mini, Calc_Average
* *********************************************************************************************************** */

/* **************************************** Header Files **************************************************** */
#include "Receiver_DataCalc.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"
#include "stdbool.h"

    

/* Function Details *******************************************************************************************
* Function Name : Calc_Maxi
* Description   : Checks the current value with the Previous maximum value
* Arguments     : current_value(float), prev_maxi(float)
* Returns       : current_value(float) or prev_maxi(float) which is greater
* *********************************************************************************************************** */
int Calc_Maxi(int Val_Arr[])
{
	int max = Val_Arr[0];
	for (int i = 0; i < 20; i++)
        	if (Val_Arr[i] > max)
         		max = Val_Arr[i];
	return max;
}

/* Function Details *******************************************************************************************
* Function Name : Calc_Mini
* Description   : Checks the current value with the Previous minimum value
* Arguments     : current_value(float), prev_mini(float)
* Returns       : current_value(float) or prev_mini(float) which is lesser
* *********************************************************************************************************** */
int Calc_Mini(int Val_Arr[])
{
	int min = Val_Arr[0];
	for (int i = 0; i < 20; i++)
        	if (Val_Arr[i] < min)
         		min = Val_Arr[i];
	return min;
}

/* Function Details *******************************************************************************************
* Function Name : Calc_Average
* Description   : Calculates the average for given array
* Arguments     : Val_Arr(float Array), NoOfValues(int)
* Returns       : Average(float)
* *********************************************************************************************************** */
float Calc_Average(int Val_Arr[])
{
  float Average = 0;
  float Sum = 0;
  float NoOfValues = 5;	

   for(int i=15; i<20; i++)
   {
     Sum += Val_Arr[i];
   }		
	
  Average = Sum/NoOfValues;
  
  return Average;
}


void readfromconsole()
{  
   int i=0;
   while (fgets(rv_data, 500, stdin))
   {
	char * token = strtok(rv_data, "/n");
   	while( token != NULL ) 
	{
		if(isdigit(*token))
		{
			if(i<10)	
				rv_array_temp[i] = atoi(token);
			else
				rv_array_soc[i] = atoi(token);
			i++;
		}	
      		token = strtok(NULL, "/n");
   	}
    }
}

bool compareDataFromStream(int send_data[],int receive_data[])
{
	bool flag = true;
	for(int i = 0; i<10; i++)
		if(send_data[i] != receive_data[i])
		   flag = false;
	return flag;
}

bool compareAverageDataFromStream(int send_data[],int receive_data[])
{
	int avg1 = Calc_Average(send_data);
	int avg2 = Calc_Average(receive_data);
	if(avg1 == avg2)
		return true;
	else
		return false;
}

bool compareMaxDataFromStream(int send_data[],int receive_data[])
{
	int max1 = Calc_Maxi(send_data);
	int max2 = Calc_Maxi(receive_data);
	if(max1 == max2)
		return true;
	else
		return false;
}

bool compareMinDataFromStream(int send_data[],int receive_data[])
{
	int min1 = Calc_Mini(send_data);
	int min2 = Calc_Mini(receive_data);
	if(min1 == min2)
		return true;
	else
		return false;
}
