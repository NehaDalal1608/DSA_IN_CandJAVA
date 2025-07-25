#include<stdio.h>
void main()
{
int a[30],loc,item,n,i;
printf("\n enter no. of elements:");
scanf("%d",&n);
printf("\n enter item to be search:");
scanf("%d",&item);
printf("\n enter elements:");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
loc=1;
while(a[loc]!=item&&loc<+n)
loc++;
if(loc==n+1)
printf("\n search is unsuccessful");
else
printf("\n %d is present at location %d",item,loc);
}


/*enter no. of elements:6

 enter item to be search:7

 enter elements:1
3
6
7
8
9

 7 is present at location 4*\
