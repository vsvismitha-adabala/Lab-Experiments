#include<stdio.h>
#include<math.h>
void main(){
float s,a,b,c,area;
printf("Enter a,b,c");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%.2f",area);
}
