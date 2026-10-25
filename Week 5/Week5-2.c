#include <stdio.h>
int main(){
int unit;
float amount ,sur_charge,total_amount;
printf("Enter units consumed");
scanf("%d",&unit);
if(unit<=50){
amount = unit*0.50;
}
else if(unit<=150){
amount = (50*0.50)+((unit-50)*0.75);
}
else if(unit<=250){
amount = (50*0.50)+(100*0.75)+((unit-150)*1);
}
else{
amount = (50*0.50)+(100*0.75)+(100*1)+((unit-250)*1.25);
}
sur_charge=amount*0.20;
total_amount=amount+sur_charge;
printf("%f",total_amount);
return 0;
}


