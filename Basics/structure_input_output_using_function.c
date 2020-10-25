//Structures

#include <stdio.h>
#include <string.h>

struct employee{
  int id;
  float salary;
  char name[20];
}emp[2];

void DisplayStruct(){
  printf("\nid is %d\n",emp[0].id);
  printf("salary is %f\n",emp[0].salary);
  printf("name is %s\n",emp[0].name);

  printf("\nid is %d\n",emp[1].id);
  printf("salary is %f\n",emp[1].salary);
  printf("name is %s\n",emp[1].name);

}

void EnterEmp(){
  printf("\nEnter Employee id : ");
  scanf("%d",&emp[0].id);
  printf("\nEnter Employee salary : ");
  scanf("%f",&emp[0].salary);
  printf("\nEnter Employee name : ");
  scanf("%s",emp[0].name);

  printf("\nEnter Employee id : ");
  scanf("%d",&emp[1].id);
  printf("\nEnter Employee salary : ");
  scanf("%f",&emp[1].salary);
  printf("\nEnter Employee name : ");
  scanf("%s",emp[1].name);
}



int main(){
  //another way of initializing Structure
  //struct employee e1 = {11,19000.87,"mayur"};

  EnterEmp();
  DisplayStruct();

  return 0;
}
