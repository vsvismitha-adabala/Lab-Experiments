#include<stdio.h>
void main(){
float velocity,distance,time;
printf("Enter velocity & time");
scanf("%f%f",&velocity,&time);
distance= velocity*time;
printf("%.2f",distance);
}
