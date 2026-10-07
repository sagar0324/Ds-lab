#include<stdio.h>
int main()
{
int arr[50],i,n;
printf("enter the limit: ");
scanf("%d",&n);
printf("enter the numbers: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("even numbers are:\n");
for(i=0;i<n;i++)
{
if(arr[i]%2==0)
printf("\t%d",arr[i]);
}
printf("\nodd numbers are:\n");
for(i=0;i<n;i++)
{
if(arr[i]%2!=0)
printf("\t%d",arr[i]);
}
}
