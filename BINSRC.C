#include<stdio.h>
#include<conio.h>
int binsrc(int x[],int low,int high,int key)
{
   int mid;
   while(low<=high)
   {
     mid=(low+high)/2;
     if(x[mid]==key)
       return mid;
     if(x[mid]<key)
       low = mid+1;
     else
       high = mid;
   }
   return -1;
}
void main()
{
     int a[200],key,i,n,succ,result=0;
     clrscr();
     printf("\n Enter the total no of elements:");
     scanf("%d",&n);
     if(n>0)
     {
       printf("\n Enter the elements in ascending order:");
       for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
       printf("\n Enter the key elements to be searched:");
       scanf("%d",&key);
       succ=binsrc(a,0,n-1,key);
       if(succ>=0)
	 printf("\n Elements found in the position: %d\n",succ+1);
       else
	 result;
     }
     else
       printf("\n number of elements should be greater than zero \n");
       getch();
     }
