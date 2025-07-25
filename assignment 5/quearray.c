#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,queue[n],ch,front=0,rear=0,i,j=1,x=n;
    printf("Queue using Array");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    printf("\nenter the size of queue:");
    scanf("%d",&n);
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==n)
                printf("\n Queue is Full");
            else
            {
                printf("\nEnter no %d=",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                
            }
            break;
        case 3:
            printf("\nQueue Elements are: ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice");
            }
        }
    }
}

/*Queue using Array
1.Insertion 
2.Deletion 
3.Display 
4.Exit
enter the size of queue:5

Enter the Choice:1

Enter no 1=2

Enter the Choice:1

Enter no 2=4

Enter the Choice:2

Deleted Element is 2

Enter the Choice:1

Enter no 3=5

Enter the Choice:3

Queue Elements are: 4
5

Enter the Choice:4*\

