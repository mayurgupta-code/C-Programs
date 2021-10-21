#include <stdio.h>
int Fibo(int);
int main()
{
  int num; int result;
  printf("Enter the nth number in Fibonacci series: ");
  scanf("%d", &num);
  if (num < 0) {
    printf("Fibonacci of negative numbers is not possible.\nTerms should be in positive number\n"); }
  else {
    result = Fibo(num);
    printf("The %d number in Fibonacci series is %d\n", num, result);
  }
  return 0;
}
int Fibo(int num) {
  if (num == 0) {
    return 0;
  }
  else if (num == 1)
  {
    return 1;

  }
  else {
    return(Fibo(num - 1) + Fibo(num - 2));
  }
}
