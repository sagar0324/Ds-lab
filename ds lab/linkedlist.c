#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node *head=NULL;
void insertfirst(){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("\n no space available");
		return;
	}
	newnode->link=NULL;
	printf("\n enter the value to insert to front\n");
	scanf("%d",&newnode->data);
	if (head==NULL){
	head=newnode;
	}else{
	newnode->link=head;
	head=newnode;
	}
	printf("\n element inserted %d",newnode->data);
}
void insertlast(){
struct node*temp=head,*newnode;
newnode = (struct node*) malloc(sizeof(struct node));
if (newnode==NULL){
printf("\n no space available");
return;
}
newnode->link=NULL;
printf("\n enter the value to insert to front\n");
scanf("%d",&newnode->data);
if(head==NULL){
head=newnode;
}else{
newnode->link=head;
head=newnode;
}
printf("\n element inserted %d",newnode->data);
}
void insertlocation(){
int key;
struct node*temp=head,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if (newnode==NULL){
printf("no space available\n");
return;
}
printf("enter the key were after you want to add element\n");
scanf("%d",&key);
while (temp!=NULL && temp->data!=key){
temp=temp->link;
}
if (temp==NULL){
printf("\n value not exist");
return;
}
printf("\n enter the element to inserted: ");
scanf("%d",&newnode->data);
newnode->link=temp->link;
temp->link =newnode;
printf("value inserted successfully %d",newnode->data);
}
void deletefirst(){
struct node *temp=head;
if (head==NULL){
printf("list empty\n");
return;
}
head=temp->link;
printf("\n value deleted %d",temp->data);
free(temp);
}
void deletelast(){
struct node *temp=head,*prev=NULL;
if(head==NULL){
printf("\n empty lidt");
return;
}
if(temp->link==NULL){
printf("\n value %d deleted",temp->data);
head=NULL;
free(temp);
return;
}
while (temp->link!=NULL){
prev=temp;
temp=temp->link;
}
printf("\n value %d deleted \n",temp->data);
prev->link=NULL;
free(temp);
}
void deletelocation(){
int key;
struct node*temp=head,*prev=NULL;
if (head==NULL){
printf("empty list\n");
return;
}
printf("\n enter the key that you want to delete: ");
scanf("%d",&key);
if (temp->data==key){
head=temp->link;
printf("\n value %d is deleted",temp->data);
free(temp);
return;
}
while (temp!=NULL && temp->data!=key){
prev=temp;
temp=temp->link;
}
if(temp==NULL){
printf("\n value not exist\n");
return;
}
prev->link=temp->link;
printf("\n value %d is deleted",temp->data);
free(temp);
}
void search(){
struct node *temp=head;
int pos=0,found=0,val;
if (head==NULL){
printf("empty list\n");
return;
}
printf("\n enter the value to search: ");
scanf("%d",&val);
while (temp!=NULL){
if(temp->data==val){
printf("%d value found at location %d\n",temp->data,pos+1);
found=1;
}
pos++;
temp=temp->link;
}
if (!found){
printf("value %d not exist",val);
}
}
void display(){
struct node*temp=head;
if(temp==NULL){
printf("list empty");
return;
}
printf("\n elements in the list\n");
while(temp!=NULL){
printf("%d",temp->data);
temp=temp->link;
}
}
void main()
{
int choice;
printf("---singly linked list---\n");
do
{
printf("\n---list operations---\n");
printf("1.insertfirst\n");
printf("2.insertlast\n");
printf("3.insertlocation\n");
printf("4.deletefirst\n");
printf("5.deletelast\n");
printf("6.deletelocation\n");
printf("7.search\n");
printf("8.display\n");
printf("9.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch (choice)
{
case 1:
	insertfirst();
	break;
case 2:
	insertlast();
	break;
case 3:
	insertlocation();
	break;
case 4:
	deletefirst();
	break;
case 5:
	deletelast();
	break;
case 6:
	deletelocation();
	break;
case 7:
	search();
	break;
case 8:
	display();
	break;
case 9:
	printf("\n exit\n");
	break;
default:
	printf("invalid choice");
}
}while (choice !=9);
}
