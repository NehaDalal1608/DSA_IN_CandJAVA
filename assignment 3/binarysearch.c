#include <stdio.h>
void main()
{
int a[30],beg,end,n,item,i,mid;
printf("\nEnter size of array:");
scanf("%d",&n);

printf("\nEnter elements:");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);

printf("\nEnter item to be search:");
scanf("%d",&item);

beg=1;
end=n;
mid=(beg+end)/2;

while(beg<=end && a[mid]!=item)
{
	if(item<a[mid])
		end=mid-1;

	else
		beg=mid+1;


	mid=(beg+end)/2;
}

if(a[mid]==item)
	printf("\n%dis present at location:%d\n",item ,mid);

else
	printf("\nsearch is unsucceful");
}


/*Enter size of array:6

Enter elements:11
12
1
13
14
15

Enter item to be search:1

1is present at location:3*\

