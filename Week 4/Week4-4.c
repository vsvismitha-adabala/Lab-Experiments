#include<stdio.h>
void main(){
int s1,s2,s3,s4,s5,sum;
printf("Enter s1,s2,s3,s4,s5");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
sum = s1+s2+s3+s4+s5;
float avg= sum/5.0;
printf("Total is %d and average is %f",sum ,avg);
}
