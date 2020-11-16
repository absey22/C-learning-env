#include <stdio.h>
#include <strings.h>

int main()
{
  struct person {
    // member variables
    char name[32];
    int age;
  };

  //declare
  char name[50];
  struct person president = {
    "Georgey", 69 };

  printf("%s %i", president.name,president.age);

  return(0);
    
}
