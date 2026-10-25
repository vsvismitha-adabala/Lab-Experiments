#include<stdio.h>
void main()
{
float c,f ;
//conversion of Fahrenheit to celsius 
printf("Enter f");
scanf("%f",&f);
c=(5*(f-32))/9;
printf("%f",c);
//conversion of celsius to Fahrenheit
printf("Enter c");
scanf("%f",&c);
f=((9*c)/5)+32;
printf("%f",f);
}
