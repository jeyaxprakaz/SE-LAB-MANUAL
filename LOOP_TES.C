#include<stdio.h>
#include<conio.h>
void main()
{
  int i=0;
  clrscr();
  printf("\n Before Looping i=%d\n",i);
  while(i<5)
  {
    printf("\n i=%d\n",i++);
  }
  printf("\n After loop i=%d\n",i);
  getch();
}