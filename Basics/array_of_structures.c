//Structures

#include <stdio.h>
#include <string.h>

struct employee{
  int id;
  float salary;
  char name[20];
};

int main(){
  struct employee e[10]; //array of Structures
  //This makes the entry of the 10 employee
  //and each employee can be accessed by the index of the array

  e[0].id = 11;
  e[0].salary = 12000;
  strcpy(e[0].name,"mayur");

  e[1].id = 19;
  e[1].salary = 14000;
  strcpy(e[1].name,"mansi");

  e[2].id = 69;
  e[2].salary = 18000;
  strcpy(e[2].name,"surya");



  return 0;
}
