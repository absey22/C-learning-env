#include <stdio.h>



float mult(float a, float b)
{
  float result;
  

  result = a*b;

  return(result);
}

float divi(float a, float b)
{
  float result;
  

  result = a/b;

  return(result);
}

float addi(float a, float b)
{
  float result;
  

  result = a+b;

  return(result);
}

float subt(float a, float b)
{
  float result;
  

  result = a-b;

  return(result);
}



int statusmessage()
{
  puts("Completed.");

  return(0);
}




int main()
{
  
  float x1,x2;
  char operationtype[4];

  
  /* TEST for mult function. */
  if(mult(2.0,3.0) != 6.0)
  {
    printf("Failure in mult. \n");
  }
  else
  {
    printf("Mult successful. \n");
  }
  /* TEST for mult function. */

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




