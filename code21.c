#include<stdio.h>
int main()
{
  int month;
  printf("enter number from 1 to 12");
  scanf("%d",&month);
  switch(month){
     case 1:
      printf("january-31days");
        break;
     case 2:
      printf("february-28days");
      break;
      case 3:
      printf("march-31days");
      break;
      case 4:
      printf("april-30days");
      break;
      case 5:
      printf("may-31days");
      break;
      case 6:
      printf("june-30days");
      break;
      case 7:
      printf("july-31days");
      break;
      case 8:
      printf("august-31 days");
      break;
      case 9:
      printf("september-30days");
      break;
      case 10:
      printf("october-31days");
      break;
      case 11:
      printf("november-30days");
      break;
      case 12:
      printf("december-31days");
      break;
      default:
      printf("ivalid month");
  }

}