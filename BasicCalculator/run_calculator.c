#include <stdio.h>
#include <string.h>
#include "calculator_functions.h"



int statusmessage()
{
  puts("Completed.");

  return(0);
}



int main()
{
  
  float x1,x2;
  char operationtype[4+1];
 

  printf("First Number: ");
  scanf("%f",&x1);

  printf("Second Number: ");
  scanf("%f",&x2);
  
  
  printf("Desired Operation? (options: mult/divi/addi/subt) \n");
  scanf("%s",operationtype);

  /*

  while(strcmp(operationtype,"mult")==1 || strcmp(operationtype,"divi")==1 || strcmp(operationtype,"addi")==1 || strcmp(operationtype,"subt")==1 )
      {
	printf("Invalid Operation. Try again with operation type:\n");
	scanf("%s",operationtype);
      }
  */
  printf("Will now do: %f  %s  %f. \n",x1, operationtype,x2);
    
   
   
    
   if(strcmp(operationtype,"mult")==0)
   {
     printf("%f \n",mult(x1,x2));
   }
   else if(strcmp(operationtype,"divi")==0)
   {
      printf("%f \n",divi(x1,x2));
   }
   else if (strcmp(operationtype,"addi")==0)
   {
     printf("%f \n",addi(x1,x2));
   }
   else if (strcmp(operationtype,"subt")==0)
   {
     printf("%f \n",subt(x1,x2));
   }
   else
   {
     printf("Invalid option. Try again with operation type.\n");
   }


  statusmessage();
   
  return(0);
}
