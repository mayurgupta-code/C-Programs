//Structures

#include <stdio.h>
#include <string.h>

struct employee{
  int id;
  float salary;
  char name[20];
};

int main(){
  struct employee e1;

  e1.id = 22;
  e1.salary = 120000.69;
  //e1.name = "mayur"; won't work
  strcpy(e1.name,"mayur");

  printf("%d\n",e1.id);
  printf("%f\n",e1.salary);
  printf("%s\n",e1.name);

}
