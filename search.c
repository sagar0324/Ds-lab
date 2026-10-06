#include<stdio.h>
int main()
{
int i,n,a[100],key,found=0;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to be searched");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("element found at position %d",i+1);
found=1;
}
}
if(found==0)
{
printf("element not found" );
}



return 0;
}
