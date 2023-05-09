#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("\n Enter the  value of a,b,c:");
  scanf("%d%d%d",&a,&b,&c);
  if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
  {
    if((a==b)&&(b==c))
    {
      printf("\n It's an Equilateral Triangle");
    }
    else if((a==b)||(b==c)||(c==a))
    {
      printf("\n It's an isosceles Triangle");
    }
    else
    {
      printf("\n It's a scalene Triangle");
    }
  }
  else
  {
    printf("\n Not  a Triangle");
  }
  getch();
}