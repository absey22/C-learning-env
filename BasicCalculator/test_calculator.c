#include <stdio.h>
#include "calculator_functions.h"

int main()
{
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

  return(0);
}
