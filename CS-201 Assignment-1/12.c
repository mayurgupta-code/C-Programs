#include <stdio.h>
int main() {
int m, n, p, q, c, d, k, sum = 0;
int first[10][10], second[10][10], multiply[10][10], add[10][10];
printf("Enter number of rows and columns of first matrix\n");
scanf("%d%d", &m, &n);
printf("Enter elements of first matrix row wise\n");

for (c = 0; c < m; c++) for (d = 0; d < n; d++)
scanf("%d", &first[c][d]);
printf("Enter number of rows and columns of second matrix\n"); scanf("%d%d", &p, &q);
printf("Enter elements of second matrix row wise\n");
for (c = 0; c < p; c++) for (d = 0; d < q; d++)
scanf("%d", &second[c][d]);
if (n != p)
printf("The multiplication isn't possible.\n");
else {
for (c = 0; c < m; c++) { for (d = 0; d < q; d++) {
for (k = 0; k < p; k++) {
sum = sum + first[c][k]*second[k][d];
}
multiply[c][d] = sum;
sum = 0; }

}
printf("Product of the matrices:\n");
for (c = 0; c < m; c++) { for (d = 0; d < q; d++)
printf("%d\t", multiply[c][d]);
printf("\n"); }
}
if(p==m && q==n){
for (c = 0; c < m; c++) {
  for (d = 0; d < q; d++)
add[c][d] = first[c][d] + second[c][d];
}
printf("Addition of the matrices:\n"); for (c = 0; c < m; c++) {
for (d = 0; d < q; d++) printf("%d\t", add[c][d]);
printf("\n");
 }
}
else{

printf("Addition is not possible!!");
}
return 0;
}
