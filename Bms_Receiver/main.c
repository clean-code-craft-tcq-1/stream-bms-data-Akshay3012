#include "Receiver_DataCalc.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"
//#include <bits/stdc++.h>

/* Function Details *******************************************************************************************
* Function Name : main
* Description   : main function to receive the Data
* Arguments     : -
* Returns       : 0
* *********************************************************************************************************** */
int main() {
    char rv_data[500];
    char ch;
    int i=0;
    int stream[20];
    
  // while ((ch = fgetc(stdin)) != EOF)
while (fgets(rv_data, 500, stdin))
{
	//printf("%s", rv_data); 
	char * token = strtok(rv_data, "/n");
   	// loop through the string to extract all other tokens
   	while( token != NULL ) 
	{
		if(isdigit(*token))
		{
      		//printf( " %s\n", token ); //printing each token
		stream[i] = atoi(token);
		printf("%d\n",stream[i]);
		i++;
		}	
      		token = strtok(NULL, "/n");
		
   	}
	
	
	
	
	
}
	
//printf("%c\n",ch);
  //printf("\n\n\nReceived Data* %s\n\n",rv_data);
    return 0;
}
