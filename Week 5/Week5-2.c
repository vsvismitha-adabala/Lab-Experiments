#include <stdio.h>
int main(){
int unit;
float amount ;
printf("Enter units consumed");
scanf("%d",&unit);
if(unit>=0){
if(unit<=100){
amount = unit*1.50;
}
else if(unit<=200 && unit>=101){
amount = unit*2.5;
}
else if(unit<=500 && unit>=201){
amount = unit*4.0;
}
else if(unit>=500){
amount = unit*6.0;
}
printf("Bill amount is %f",amount);
}
else 
printf("Invalid input");
return 0;
}


