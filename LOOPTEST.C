#include<stdio.h>
#include<conio.h>
void main()
{
  int month;
  do
  {
    printf("\n Please Enter the Birth of your month:");
    scanf("%d",&month);
  }while(month<1||month>12);
  getch();
}