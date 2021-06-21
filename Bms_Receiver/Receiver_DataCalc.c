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
* Description   : To Find the maximum value from the stream of data
* Arguments     : int val_arr[]
* Returns       : the max value from the stream
* *********************************************************************************************************** */
int Calc_Maxi(int Val_Arr[])
{
	int max = Val_Arr[0];
	for (int i = 0; i < 10; i++)
        	if (Val_Arr[i] > max)
         		max = Val_Arr[i];
	return max;
}

/* Function Details *******************************************************************************************
* Function Name : Calc_Mini
* Description   : To find the min value from stream
* Arguments     : int val_arr[]
* Returns       : the min value from the stream
* *********************************************************************************************************** */
int Calc_Mini(int Val_Arr[])
{
	int min = Val_Arr[0];
	for (int i = 0; i < 10; i++)
        	if (Val_Arr[i] < min)
         		min = Val_Arr[i];
	return min;
}

/* Function Details *******************************************************************************************
* Function Name : Calc_Average
* Description   : Calculates the average for given array
* Arguments     : Val_Arr[]
* Returns       : Average(float)
* *********************************************************************************************************** */
float Calc_Average(int Val_Arr[])
{
  float Average = 0;
  float Sum = 0;
  float NoOfValues = 5;	

   for(int i=5; i<10; i++)
   {
     Sum += Val_Arr[i];
   }		
	
  Average = Sum/NoOfValues;
  
  return Average;
}

/* Function Details *******************************************************************************************
* Function Name : readfromconsole
* Description   : To read the values from console
* Arguments     : 
* Returns       : 
* *********************************************************************************************************** */

void readfromconsole()
{  
   int i=0;
   while (fgets(rv_data, 500, stdin))
   {
	printf("%s",rv_data);
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

/* Function Details *******************************************************************************************
* Function Name : compareDataFromStream
* Description   : To check the incoming data from the sender and is received in the receiver side(both temp and soc)
* Arguments     : int send_data[], int receive_data[]
* Returns       : bool flag
* *********************************************************************************************************** */
bool compareDataFromStream(int send_data[],int receive_data[])
{
	bool flag = true;
	for(int i = 0; i<10; i++)
		if(send_data[i] != receive_data[i])
		   flag = false;
	return flag;
}

/* Function Details *******************************************************************************************
* Function Name : compareAverageDataFromStream
* Description   : To find the average data from the sender and is received in the receiver side(both temp and soc)
* Arguments     : int send_data[], int receive_data[]
* Returns       : bool flag
* *********************************************************************************************************** */
bool compareAverageDataFromStream(int send_data[],int receive_data[])
{
	int avg1 = Calc_Average(send_data);
	int avg2 = Calc_Average(receive_data);
	if(avg1 == avg2)
		return true;
	else
		return false;
}
/* Function Details *******************************************************************************************
* Function Name : compareMaxDataFromStream
* Description   : To find the Max value from the sender and is received in the receiver side(both temp and soc)
* Arguments     : int send_data[], int receive_data[]
* Returns       : bool flag
* *********************************************************************************************************** */
bool compareMaxDataFromStream(int send_data[],int receive_data[])
{
	int max1 = Calc_Maxi(send_data);
	int max2 = Calc_Maxi(receive_data);
	if(max1 == max2)
		return true;
	else
		return false;
}
/* Function Details *******************************************************************************************
* Function Name : compareMinDataFromStream
* Description   : To find the Min value from the sender and is received in the receiver side(both temp and soc)
* Arguments     : int send_data[], int receive_data[]
* Returns       : bool flag
* *********************************************************************************************************** */
bool compareMinDataFromStream(int send_data[],int receive_data[])
{
	int min1 = Calc_Mini(send_data);
	int min2 = Calc_Mini(receive_data);
	if(min1 == min2)
		return true;
	else
		return false;
}
