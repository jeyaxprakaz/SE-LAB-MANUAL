#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,t;
  clrscr();
  printf("\n Enter the value of a and b:");
  scanf("%d%d",&a,&b);
  if(a<b)
  {
    t=a;
    a=b;
    b=t;
  }
  printf("%d%d",a,b);
  getch();
}