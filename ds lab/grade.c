#include<stdio.h>
int main()
{
int mark;
printf("Enter the mark");
scanf("%d",&mark);
if (mark>90)
printf("first class");
else if (mark>=80)
printf("b grade");
else if (mark>=70)
printf("c grade");
else if (mark>=60)
printf("d grade");
else
printf("fail");
return 0;
}
