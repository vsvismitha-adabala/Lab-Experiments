#include<stdio.h>
int main(){
int num1,num2,num3,num4,min1,max1,min2,max2,min,max;
printf("Enter num1,num2,num3,num4");
scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
if(num1>num2){
max1=num1;
min1=num2;
}
else{
max1=num2;
min1=num1;
}
if(num3>num4){
max2=num3;
min2=num4;
}
else{
max2=num4;
min2=num3;
}
if(max1>max2)
  printf("%d is max\n",max1);
else
  printf("%d is max\n",max2);
 if(min1>min2)
  printf("%d is min",min2);
else
  printf("%d in min",min1);
return 0;
  }