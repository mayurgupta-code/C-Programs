#include <stdio.h>
#include <stdlib.h>

int main() {
  /* code */
  int *ptr;
  ptr = (int *) malloc(3*sizeof(int));

  for (int i = 0; i < 6; i++) {
    /* code */
    printf("Enter the value of %d element : ",i);
    scanf("%d",&ptr[i]);
  }

  for (int i = 0; i<6; i++){
    printf("Value of %d element is : %d\n",i,ptr[i]);
  }
  free(ptr);
  return 0;
}
