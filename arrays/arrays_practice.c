#include <stdio.h>

#define ASIZE 10

int main()

{
  const int unused = 11;
  float sum1 = 0, sum2=0, wgtavg = 0;
  int x = 0;

  float myarray[10] = {1,2,3,4,5,6,7,8,9,20};
  float myweights[10] = {0,0.,0.,0.,0.,0.,100,0,0.,0};

  for(x=0;x<ASIZE;x++)
  {
    sum1+=myweights[x];
  }

  x=0;
  for(x=0;x<ASIZE;x++)
  {
    sum2+=myweights[x]/sum1;
  }

  printf("%f\n",sum2);
  
  x=0;
  for(x=0;x<ASIZE;x++)
  {
    float wgt;
    wgt=myweights[x]/sum1;
    printf("%f",wgt);
    wgtavg+=(myarray[x]*wgt)/ASIZE;
  }

  printf("weighted avg = %f \n",wgtavg);

  return(0);
  
}
