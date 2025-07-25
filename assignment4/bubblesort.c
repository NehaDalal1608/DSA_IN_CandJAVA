#include<stdio.h>
void main()
{
int a[50],n,i,j,temp;
printf("\n enter number of elements:");
scanf("%d",&n);
printf("\n enter %d integers \n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("array after implementing bubble sort:");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}

/*enter number of elements:5

 enter 5 integers 
2
3
7
8
6
array after implementing bubble sort:2 3 6 7 8*\ 
