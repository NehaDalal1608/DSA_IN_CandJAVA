#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
int info;
struct node *link;
}*start=0,*ptr;
void main()
{
int ch;
while(1)
{
printf("\n menu \n 1.crete \n 2.display 3.exit \n");
printf("\n enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:create();
break;
case 2:display();
break;
case 3:exit(0);
break;
default :printf("\n invalid choice");
break;
}
}
}
void create()
{
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
printf("\n enter the data value for node:");
scanf("%d",&new -> info);
new -> link=0;
if(start==0)
{
start=new;
}
else
{
ptr=start;
while(ptr -> link!=0)
{
ptr=ptr->link;
}
ptr -> link=new;
}
}
void display()
{
ptr=start;
printf("\n the linked list is:\n");
while(ptr != 0)
{
printf("%d -> ",ptr -> info);
ptr=ptr -> link;
}
}
  /*menu 
 1.crete 
 2.display 3.exit 

 enter your choice:1

 enter the data value for node:23

 menu 
 1.crete 
 2.display 3.exit 

 enter your choice:1

 enter the data value for node:34

 menu 
 1.crete 
 2.display 3.exit 

 enter your choice:2

 the linked list is:
23 -> 34 -> 
 menu 
 1.crete 
 2.display 3.exit 

 enter your choice:3 *\
