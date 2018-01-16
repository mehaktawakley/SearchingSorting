/*
Algorithm
1. Input an array A of n elements an "data" to be sorted.
2. LB = 0, UB = n; mid = int((LB+UB)/2)
3. Repeat step 4 and 5 while (LB<=UB) and (A[mid]!=data)
4. If(data<A[mid])
    UB = mid-1
   else
    LB = mid+1
5. mid = int((LB+UB)/2)
6. If(A[mid]==data)
    printf"data found"
   else
    printf"data not found"
7. Exit
*/

//-------------------------------------------------------//

#include<stdio.h>
#include<conio.h>

void main()
{
 int a[1000],n,lb,ub,mid,item;
 clrscr();

 printf("Enter number of elements you want to enter::");
 scanf("%d",&n);

 printf("Enter elements of array ::");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 printf("Enter element to search::");
 scanf("%d",&item);

 lb = 0;
 ub = n-1;
 mid = ((lb+ub)/2);

 while(item!=a[mid] && lb<=ub)
 {
  if(item>a[mid])
   lb=mid+1;
  else
   ub=mid-1;
  mid=(lb+ub)/2;
 }

 if(item==a[mid])
  printf("%d Item found at %d position",item,mid+1);
 else
  printf("Item not found");

 getch();
}

//----------------------------------------------------------------------//
/*
Time Complexity
 Worst-case performance = O(log n)
 Average-case performance = O(log n)
 Best-case performance = O(1)

Space Complexity
 Worst-case complexity = O(1)
