#include<stdio.h>
// Structure
struct Book{
  char title[25],author[25];
  int pages,sold_copies;
  float price,amount;
}Books[5];
// a. Populating Values in arry of Books
void populate(){
  for(int i=0; i<5 ;++i){
  printf("\n Enter Book Title : ");
  gets(Books[i].title);
  printf(" Enter Book Author : ");
  gets(Books[i].author);
  printf(" Enter number of pages : ");
  }
}
scanf("%d",&Books[i].pages);
printf(" Enter Book price : Rs ");
scanf("%f",&Books[i].price);
printf(" Enter number of copies sold : ");
scanf("%d",&Books[i].sold_copies);
Books[i].amount = Books[i].price*Books[i].sold_copies;
while(getchar()!='\n');
// b. Display books
void display(){
for(int i=0; i<5 ;++i){
// clears input buffer
printf("\n\n Book Title : %s",Books[i].title);
printf("\n Book Author : %s",Books[i].author);
printf(" Enter number of pages : %d",Books[i].pages);
printf("\n Price : Rs %.2f",Books[i].price);
printf("\n Number of copies sold : %d",Books[i].sold_copies);
printf("\n Amount earned of copies sold : Rs %.2f ",Books[i].amount);
}
}

// c. Max pages book
void max_pages(){
int max=Books[0].pages,pos=0;
for(int i=1 ; i<5;++i){ if(max<Books[i].pages){
max = Books[i].pages;
pos = i; }
}
printf("\n\n Book Title : %s",Books[pos].title);
printf("\n Book Author : %s",Books[pos].author);
printf(" Enter number of pages : %d",Books[pos].pages);
printf("\n Price : Rs %.2f",Books[pos].price);
printf("\n Number of copies sold : %d",Books[pos].sold_copies);
printf("\n Amount earned of copies sold : Rs %.2f ",Books[pos].amount);
}
// d. Min cost void min_price(){

int min=Books[0].pages,pos=0; for(int i=1 ; i<5; ++i){
if(min>Books[i].pages){ min = Books[i].pages; pos = i;
} }
printf("\n\n Book Title : %s",Books[pos].title);
printf("\n Book Author : %s",Books[pos].author);
printf(" Enter number of pages : %d",Books[pos].pages);
printf("\n Price : Rs %.2f",Books[pos].price);
printf("\n Number of copies sold : %d",Books[pos].sold_copies);
printf("\n Amount earned of copies sold : Rs %.2f ",Books[pos].amount);
}
// e. total money
void total_amount(){
  float sum=0;
for(int i=0; i<5 ; ++i){
  sum += Books[i].amount; 
}

printf("\n Rs %.2f",sum); }
int main(){
printf("\n-----POPULATING ARRAY OF BOOKS-----"); populate();
printf("\n-----DISPLAYING BOOKS-----"); display();
printf("\n-----BOOK WITH MAXIMUM PAGES-----"); max_pages();
printf("\n-----BOOKS WITH MINIMUM PRICE-----"); min_price();
printf("\n-----TOTAL AMOUNT OF MONEY EARNED BY SELLING BOOKS-----");
total_amount();
return 0;
}
