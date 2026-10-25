#include<stdio.h>
void main(){
int A,B,C;
printf("Enter A,B,C");
scanf("%d%d%d",&A,&B,&C);
A>B && A>C?printf("%d",A):B>C?printf("%d",B):printf("%d",C);
}
