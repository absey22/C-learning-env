#include <stdio.h>



float mult(float a, float b)
{
  float result;
  

  result = a*b;

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
  int x;

  
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

  
  printf("First Number: ");
  scanf("%f",&x1);

  printf("Second Number: ");
  scanf("%f",&x2);


  printf("Result = %f \n",mult(x1,x2));




  
  
  printf("Enter integer: ");
  scanf("%i",&x);

  if(x==1)
    {
      printf("Red \n");
    }
  else if(x==2)
    {
      printf("Green \n");
    }
  else if(x==3)
    {
      printf("Blue \n");
    }
  else
    printf("Invalid option \n");

   


  switch(x)
  {
     case 1:
       printf("Red. \n");
       break;
     case 2:
       printf("Green. \n");
       break;
     case 3:
       printf("Blue. \n");
       break;
     default:
       printf("Invalid Choice. \n");
  }

  statusmessage();
  return(0);
}




