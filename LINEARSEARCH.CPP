//LinearSearch

#include<stdio.h>
#include<conio.h>

void main()
{
 int a[10],n,flag=0,i;
 int m=0;
 clrscr();
 printf("Enter number of elements to enter:");
 scanf("%d",&m);
 printf("Enter %d elements in array \n",m);
 for(i=0;i<m;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter element to search:");
 scanf("%d",&n);
 for(i=0;i<m;i++)
 {
  if(a[i]==n)
  {
   printf("Element found at %d location",i+1);
   flag=1;
   break;
  }
 }

 if(flag!=1)
 {
  printf("Element not found");
 }

 getch();
}