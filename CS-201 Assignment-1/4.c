#include <stdio.h>
int main() {
  int values[5];
  int sum =0;
  printf("Enter elements: ");
  for (int i = 0; i < 5; ++i){
  scanf("%d", values + i);
}
  printf("Element entered: \n");
  for (int i = 0; i < 5; ++i){
    printf("%d\n", *(values + i));
  }
    /* Reversal */
  for (int i = 4; i >= 0; i--) {
    printf("\n element no. %d is %d ", i, *(values+i));
  }
  printf("\n");
  return 0;
}
