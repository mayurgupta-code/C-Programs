//Structures

#include <stdio.h>
#include <string.h>

struct employee{
  int id;
  float salary;
  char name[20];
};

int main(){
  struct employee e1, e2, e3;

  printf("\nEnter the value for id of e1: ");
  scanf("%d", &e1.id);
  printf("\nEnter the value for salary of e1: ");
  scanf("%f", &e1.salary);
  printf("\nEnter the value for name of e1: ");
  scanf("%s", e1.name);

  printf("\nEnter the value for id of e2: ");
  scanf("%d", &e2.id);
  printf("\nEnter the value for salary of e2: ");
  scanf("%f", &e2.salary);
  printf("\nEnter the value for name of e2: ");
  scanf("%s", e2.name);

  printf("\nEnter the value for id of e3: ");
  scanf("%d", &e3.id);
  printf("\nEnter the value for salary of e3: ");
  scanf("%f", &e3.salary);
  printf("\nEnter the value for name of e3: ");
  scanf("%s", e3.name);


  return 0;
}
