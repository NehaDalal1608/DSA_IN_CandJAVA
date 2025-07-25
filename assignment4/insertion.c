#include<stdio.h>
void main()
{
int a[100],n,k,temp,ptr;
a[0]=-1;
printf("\nEnter size of array:");
scanf("%d",&n);

printf("\nEnter an array:");

for(k=0;k<n;k++)
scanf("%d",&a[k]);

for(k=0;k<n;k++)
{
temp=a[k];
ptr=k-1;
 while(temp<a[ptr])
 {
  a[ptr+1]=a[ptr];
  ptr--;
 }
  a[ptr+1]=temp;
}
printf("\nsorted array:\n");
for(k=0;k<n;k++)
{
printf(" %d ",a[k]);
}
printf("\n");
}
/*
output:

Enter size of array:4

Enter an array:12
765
43
99

sorted array:
 12  43  99  765
 */
