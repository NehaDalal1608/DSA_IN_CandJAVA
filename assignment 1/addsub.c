#include<stdio.h>
void main()
{
	int a,b,choice,result;
	printf("\n Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("\n Choose an operation : ");
	printf("\n 1 for addition \n 2 for substraction \n 3 for multiplication : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			result=a+b;
			printf("\n Addition is : %d \n",result);
			break;
		case 2 :
			result=a-b;
			printf("\n Substraction is : %d \n",result);
			break;
		case 3 :
			result=a*b;
			printf("\n Multiplicato is : %d \n",result);
			break;
		default :
			printf("\n Invalid choice \n");
			break;
	}
}

/*OUtput :
Enter two numbers : 34 5

 Choose an operation : 
 1 for addition 
 2 for substraction 
 3 for multiplication : 2

 Substraction is : 29 
*/

