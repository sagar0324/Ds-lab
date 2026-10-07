#include<stdio.h>
int main()
{
int arr[5],i,n,sum=0;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("the sum is:");
for(i=0;i<n;i++)
{
sum=sum+arr[i];
}
printf("%d\n",sum);
return 0;
}
