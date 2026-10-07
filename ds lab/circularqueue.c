#include<stdio.h>
#define max 5
int queue[max];
int front=-1 ,rear=-1;
int isfull()
{
	if((rear+1)%max==front){
	return 1;
	}
	return 0;
}
int isempty(){
if (front==-1  && rear==-1){
return 1;
}
return 0;
}
void display()
{
int i;
if(isempty())
{
printf("queue is empty\n");
return;
}
printf("\n queue elements are : ");
i=front;
do{
printf("%d\t",queue[i]);
i=(i+1)%max;
}while(i!=(rear+1)%max);
}
void dequeue()
{
if (isempty())
{
printf("queue is empty");
return;
}
printf("\n %d is deleted",queue[front]);
if (front==rear)
{
front=rear=-1;
}
else
{
front=(front+1)%max;
}
}
void enqueue()
{
int x;
if(isfull())
{
printf("queue is full\n");
return;
}
printf("enter the element to insert: ");
scanf("%d",&x);
if (isempty())
{
front=rear=0;
}
else
{
rear=(rear+1)%max;
}
queue[rear]=x;
printf("element %d inserted successfully\n",queue[rear]);
}
void search()
{
int key,i,found=0;
if (isempty())
{
printf("\n queue is empty ");
return;
}
printf("Enter the element to search: ");
scanf("%d",&key);
i=front;
do{
if (queue[i]==key)
{
printf("\n element %d found at position %d",key,i);
found=1;
break;
}
i=(i+1)%max;
}while (i!=(rear+1)%max);
if(!found)
{
printf("\n element %d not found in the queue.\n",key);
}
}
int main()
{
int choice;
printf("---circular queue using array---\n");
do
{
printf("\n---queue operations---\n");
printf("1.enqueue\n");
printf("2.dequeue\n");
printf("3.display\n");
printf("4.search\n");
printf("5.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch (choice)
{
case 1:
	enqueue();
	break;
case 2:
	dequeue();
	break;
case 3:
	display();
	break;
case 4:
	search();
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
