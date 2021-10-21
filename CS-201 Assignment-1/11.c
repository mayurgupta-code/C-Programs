#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, i, *arr ;
  printf("Enter size of array you want to create: \n");
  scanf("%d", &n);
  arr = (int*) malloc(n * sizeof(int));
  if(arr == NULL)
  {
    printf("Memory not allocated.");
    exit(0);
  }
  printf("\nEnter the elements: ");
  for(i = 0; i < n; ++i){
    scanf("%d", arr + i);
  }
    printf("You entered: \n");
  for (int i = 0; i < n; ++i){
    printf("%d\n", *(arr + i));
    free(arr);
  }
  return 0;
}
