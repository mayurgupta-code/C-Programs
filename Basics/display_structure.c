//Structures

#include <stdio.h>
#include <string.h>

struct employee{
  int id;
  float salary;
  char name[20];
};

void DisplayStruct(struct employee emp){
  printf("id is %d\n",emp.id);
  printf("salary is %f\n",emp.salary);
  printf("name is %s\n",emp.name);

}

int main(){
  //another way of initializing Structure
  struct employee e1 = {11,19000.87,"mayur"};
  DisplayStruct(e1);

  return 0;
}
