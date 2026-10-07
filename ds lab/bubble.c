#include<stdio.h>
void main()
{
int array[50],i,j,n,temp;
printf("enter the limit of the array:");
scanf("%d",&n);
printf("enter the elements in thr array: ");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(array[j]>array[j+1])
{
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
}
printf("\n sorted array is: ");
for(i=0;i<n;i++)
{
printf("%d\t",array[i]);
}
}

