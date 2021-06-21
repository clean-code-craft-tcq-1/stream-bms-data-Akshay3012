/* File Details ***********************************************************************************************
* File Name   :	main.c
* Author      : Arjun Sivakumar
* Description : Receives the BMS Data & perform calculations on received values
* Functions   : main
* *********************************************************************************************************** */

/* **************************************** Header Files **************************************************** */
#include "Receiver_DataCalc.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

/* Function Details *******************************************************************************************
* Function Name : main
* Description   : main function to receive the Data
* Arguments     : -
* Returns       : 0
* *********************************************************************************************************** */
int main() {
    char rv_data[5000];
    char ch;
    int i=0;
    
   // while ((c = fgetc(stdin)) != EOF) fputc(c, stdout);
    while ( (ch = getchar(stdin)) != EOF) 
    {
        rv_data[i]=ch;
        i++;
    }
   // printf("\n\n\nReceived Data* %s\n\n",rv_data);
    return 0;
}

