#include<stdio.h>
void main()
{
int a[50],b[50],c[100],i,j,k,n,m;
printf("enter the limit of first array:");
scanf("%d",&m);
printf("Enter the elements in first first array");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("enter the limit of second array");
scanf("%d",&n);
printf("enter the elements in second array:");
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}
i=0;
j=0;
k=0;
while(i<m && j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
printf("the sorted array is:");
for(k=0;k<m+n;k++)
{
printf("\n%d",c[k]);
}
}
