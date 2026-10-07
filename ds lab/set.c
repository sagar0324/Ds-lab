#include<stdio.h>
void main() 
{
int i;
int U[5]={1,2,3,4,5};
int A[5]={1,0,0,1,1};
int B[5]={0,1,1,1,0};
int Uni[5],ints[5],diffB[5],diffA[5],CompA[5],CompB[5];
printf("\n UNIVERSAL SET IS {");
for(i=0;i<5;i++){
printf("%d",U[i]);
}
printf("}\n");
printf("\n SET A{");
for(i=0;i<5;i++){
if(A[i]==1){
printf("%d",U[i]);
}
}
printf("} \n");
printf("\n SET B{");
for(i=0;i<5;i++){
if(B[i]==1){
printf("%d",U[i]);
}
}
printf("}\n");
printf("Union of A and B in bit representation is =");
for(i=0;i<5;i++){
Uni[i]=A[i]|B[i];
printf("%d",Uni[i]);
}
printf("\n UNION {");
for(i=0;i<5;i++){
if(Uni[i]==1){
printf("%d",U[i]);
}
}
printf("}\n");
printf("Intersection of A and B in bit representation is :");
for(i=0;i<5;i++){
ints[i]=A[i] & B[i];
printf("%d",ints[i]);
}
printf("\n INTERSECTION {");
for(i=0;i<5;i++){
if(ints[i]==1){
printf("%d",U[i]);
}
}
printf("}\n");
printf("Complement of A is bit representation is =");
for(i=0;i<5;i++){
CompA[i]=1-A[i];
printf("%d",CompA[i]);
}
printf("\n A COMPLEMENT {");
for(i=0;i<5;i++){
if(CompA[i]==1){
printf("%d",U[i]);
}
}
printf("}\n");
printf("Complement of B is bit representation is =");
for(i=0;i<5;i++){
CompB[i]=1-B[i];
printf("%d",CompB[i]);
}
printf("\n B COMPLEMENT {");
for(i=0;i<5;i++){
if(CompB[i]==1){
printf("%d",U[i]);
}
}
printf("}\n");
printf("Difference of A-B in bit representation is =");
for(i=0;i<5;i++){
diffA[i]=A[i]&CompB[i];
printf("%d",diffA[i]);
}
printf("\n A-B {");
for(i=0;i<5;i++){
if(diffA[i]==1){
printf("%d",U[i]);
}
}
printf("}\n");
printf("Difference of B-A in bit representation is =");
for(i=0;i<5;i++){
diffB[i]=B[i]&CompA[i];
printf("%d",diffB[i]);
}
printf("\n B-A {");
for(i=0;i<5;i++){
if(diffB[i]==1){
printf("%d",U[i]);
}
}
printf("}\n");
}
