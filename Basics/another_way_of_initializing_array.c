//Structures

#include <stdio.h>
#include <string.h>

struct employee{
  int id;
  float salary;
  char name[20];
};

int main(){
  //another way of initializing Structure
  struct employee e1 = {11,19000.87,"mayur"};

  printf("id is %d\n",e1.id);
  printf("salary is %f\n",e1.salary);
  printf("name is %s\n",e1.name);

  return 0;
}
