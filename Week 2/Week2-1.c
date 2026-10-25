#include<stdio.h>
void main()
{
int a,b,c,sum;
float avg ;
printf("Enter a,b,c");
scanf("%d%d%d",&a,&b,&c);
sum = a+b+c;
avg = sum/3.0;
printf("sum is %d and avg is %f",sum,avg);
}
