#include<stdio.h>
int main() {
int days,fine;
printf("Enter number of days: ");
scanf("%d", &days);
if (days<=5) {
  fine = days*2;
  printf("Fine is: %d", fine); }
  else if (days<=10) {
  fine = (5*2)+(days-5)*4;
  printf("Fine is: %d", fine); }
  else if (days<=30) {
    fine = (5*2)+(5*4)+(days-10)*6;
    printf("Fine is: %d", fine); }ṇ
    else { printf("membership cancelled");}

}