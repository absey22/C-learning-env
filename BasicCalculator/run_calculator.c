#include <stdio.h>
#include "calculator_functions.h"



int statusmessage()
{
  puts("Completed.");

  return(0);
}



int main()
{
  
  float x1,x2;
  char operationtype[4];
 

  printf("Desired Operation? (options: mult/divi/addi/subt) \n");
  scanf("%c",&operationtype)

    // if(sizeof(operationtype) != 4)
    //{}
    while(operationtype != "mult" || operationtype != "divi" or operationtype != "addi" or operationtype != "subt")
      {
	printf("Try again with oepration type:\n");
	scanf("%c",&operationtype)
      }
   
  printf("First Number: ");
  scanf("%f",&x1);

  printf("Second Number: ");
  scanf("%f",&x2);


  
  switch(operationtype)
    {
    case "mult":
      printf("%f",mult(x1,x2));
      break;
    case "divi":
      printf("%f",divi(x1,x2));
      break;
    case "addi":
      printf("%f",addi(x1,x2));
      break;
    case "subt":
      printf("%f",subt(x1,x2));
      break;
    default :
      printf("Invalid option");
    }
  

  statusmessage();
  return(0);
}
