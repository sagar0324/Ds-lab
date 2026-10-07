#include<stdio.h>
#define max 5
int queue[max];
int front=-1 ,rear=-1;
void enqueue(int item)
{
if (rear==max-1)
{
printf("queue is overflow\n");
}
else
{
if(front==-1)
front=0;
rear++;
queue[rear]=item;
printf("%d inserted into queue.\n",item);
}
}
void dequeue()
{
if (front==-1 || front>rear)
{
printf("queue is underflow\n");
}
else
{
printf("deleter element is %d",queue[front]);
if (front=rear)
{
front=rear=-1;
}
else
{
front++;
}
}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
	printf("queue elements are :");
	for (i=front;i<=rear;i++)
	{
	printf("%d\t",queue[i]);
	}
	printf("\n");
	}
}
void peek()
{
if(front==-1)
{
printf("queue is empty\n");
}
else
{
printf("front element is %d",queue[front]);
}
}
int main()
{
int choice,item;
do
{
printf("\n---queue operations---\n");
printf("1.enqueue\n");
printf("2.dequeue\n");
printf("3.display\n");
printf("4.peek\n");
printf("5.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch (choice)
{
case 1:
	printf("enter the element: ");
	scanf("%d",&item);
	enqueue(item);
	break;
case 2:
	dequeue();
	break;
case 3:
	display();
	break;
case 4:
	peek();
	break;
case 5:
	printf("program ended!\n");
	break;
default:
	printf("invalid choice");
}
}while (choice !=5);
return 0;
}
