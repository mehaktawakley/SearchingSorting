/*
Bubble Sort

Algorithm
 Let A be an array of n elements where n is the number of elements.
  for i<-1 to length[A]
     for j<- lenght[A] to i+1
	 if A[j]<A[j-1]
	   exchange(A[j], A[j-1])
*/

//----------------------------------------------------------------------//

#include<stdio.h>
#include<conio.h>

void main()
{
 int a[1000],n,temp,i,j;
 clrscr();

 printf("Enter number of elements::");
 scanf("%d",&n);

 printf("Enter the elements::\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);

 printf("\n\nUsing Bubble Sort\n");

 printf("\nIn Ascending Order");

 for(i=0;i<n;i++)
 {
  for(j=0;j<n-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j+1];
    a[j+1]=a[j];
    a[j]=temp;
   }
  }
 }

 for(i=0;i<n;i++)
  printf("\n%d",a[i]);

 printf("\n\nIn Descending Order");

 for(i=0;i<n;i++)
 {
  for(j=0; j<n-1; j++)
  {
   if(a[j]<a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }

 for(i=0;i<n;i++)
  printf("\n%d",a[i]);

 getch();
}

//--------------------------------------------------------------------------------//
/*
 Complexity
  Time complexity
   Worst-case Complexity= O(n^2)
     (Because to pass first pass it will go through n-1 comparisons. 
      Similary second pass it will go through n-2 comparisons
      Sum=(n-1)+(n-2)+(n-3)+...+3+2+1
         = n^2)

    Average-case Complexity= O(n^2)
    Best-case Complexity= O(n)

  Space Complexity= O(1), because only single additional memory space is required i.e. for temp variable