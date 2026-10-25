#include<stdio.h>
#include<math.h>
void main(){
float P,R,T,CI;
printf("Enter P,R,T");
scanf("%f%f%f",&P,&R,&T);
CI = P*pow(1+R/100,T)-P;
printf("%f",CI);
}
