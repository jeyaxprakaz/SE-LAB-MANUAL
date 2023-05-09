#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int D;
int a,b,c;
int testcase=1;
void nature_of_roots(int a,int b,int c)
{
  if(a==0)
  {
    printf("\n Not a Quadratic Equation");
    return;
  }
  D=b*b-4*a*c;
  if(D>0)
  {
    printf("\n Real roots");
  }
  else if(D==0)
  {
    printf("\n Equal Roots");
  }
  else
  {
    printf("\n Imaginary Roots");
  }
}
void checkForAllTestCase()
{
  printf("\n Testcase \ta\tb\tc Actual Output\n");
  while(testcase <=5)
  {
    if(testcase==1)
    {
      a=0;
      b=50;
      c=50;
    }
    else if(testcase==2)
    {
      a=1;
      b=50;
      c=50;
    }
    else if(testcase==3)
    {
      a=50;
      b=50;
      c=50;
    }
    else if(testcase==4)
    {
      a=99;
      b=50;
      c=50;
    }
    else if(testcase==5)
    {
      a=100;
      b=50;
      c=50;
    }
    printf("%d\t\t%d\t\t%d\t\t%d\t\t",testcase,a,b,c);
    nature_of_roots(a,b,c);
    testcase++;
  }
}
void main()
{
  checkForAllTestCase();
  getch();
}

