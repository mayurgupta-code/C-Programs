// C program to show Arrow operator
// used in structure

#include <stdio.h>
#include <stdlib.h>

// Creating the structure
struct student {
	char name[80];
	int age;
	float percentage;
};


// Driver code
int main()
{

  // Creating the structure object
  struct student* emp;
  struct student* emp1;
  struct student* emp2;

	// Assigning memory to struct variable emp
	emp = (struct student*)malloc(sizeof(struct student));
  emp1 = (struct student*)malloc(sizeof(struct student));
  emp2 = (struct student*)malloc(sizeof(struct student));


	// Assigning value to age variable
	// of emp using arrow operator
  //emp->name = strcpy("mayur");
	emp->age = 20;
  emp->percentage = 99;

	// Printing the assigned value to the variable
	printf("%s\n%d\n%f\n", emp->name,emp->age,emp->percentage);

  // Assigning value to age variable
  // of emp using arrow operator
  //emp1->name = "mansi";
  emp1->age = 18;
  emp1->percentage = 95;

  // Printing the assigned value to the variable
	printf("%s\n%d\n%f\n", emp1->name,emp1->age,emp1->percentage);


	return 0;
}
