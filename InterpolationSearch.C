/*
Interpolation Search

Algorithm
Suppose A be an array of sorted elements and item is the element to be searched.
lb represents the lower bound of the array and ub represents the higher bound of array.

1. Input a sorted array of n elements and item to be searched.
2. Initialise lb = 0 and high = n-1.
3. Repeat the steps 4 through 7 until if (lb<ub).
4. Mid = lb+(ub-lb)*((item-a[lb])/(a[ub]-a[lb]))
5. If (item == a[mid])
     print"item found"
6. If(item<a[mid])
     high = mid-1;
   else if(key>a[mid])
     low=mid+1
   else
    print"the item is not found in the array and exit"
7. Stop

**Why Interpolation search better than binary search?
>>Binary search is a great algorithm for searching with average running time complexity of log(n). 
Binary search always looks for the middle of the dataset and chooses the first or the second half depending on the value of middle and the key being looked for.
The interpolation search differs from Binary in the fact that it resembles how humans search for any key in an ordered set like a word in dictionary. 
Suppose a person wants to find word “Algorithm” in dictionary, he already knows that he has to look in the beginning of the dictionary. 
The same way this algorithm keeps narrowing the search space where the searched key might be.
 A constant is found using the formula
 Mid = lb+(ub-lb)*((item-a[lb])/(a[ub]-a[lb]))
 Where, A be an array of sorted elements and item is the element to be searched.
lb represents the lower bound of the array and ub represents the higher bound of array.

**Source: https://blog.imaginea.com/interpolation-search-a-search-algorithm-better-than-binary-search/
*/

//-----------------------------------------------------------------//

#include<stdio.h>
#include<conio.h>

void main()
{
 int a[1000],lb,ub,mid,item,n;
 clrscr();

 printf("Enter number of elements you want to enter::");
 scanf("%d",&n);

 printf("Enter elements of array::");
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);

 printf("Enter element you want to search::");
 scanf("%d",&item);

 lb=0;
 ub=n-1;
 mid=lb+(ub-lb)*((item-a[lb])/(a[ub]-a[lb]));

 while(a[mid]!=item && lb<=ub)
 {
  if(item < a[mid])
   ub=mid+1;
  else
   lb=mid+1;
  mid=lb+(ub-lb)*((item-a[lb])/(a[ub]-a[lb]));
 }

 if(a[mid]==item)
  printf("%d item found at %d position",item,mid+1);
 else
  printf("Item not found");

 getch();
}

//-------------------------------------------------------------------//
