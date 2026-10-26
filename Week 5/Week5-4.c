#include<stdio.h>
int main(){
int a,b;
int op_num;
// 1 for Addition,2 for Subtraction, 3 for multiplication , 4 for Division 
printf("Enter number for operation");
scanf("%d",&op_num);
printf("Enter a & b");
scanf("%d%d",&a,&b);
switch(op_num){
case 1 : printf("%d",a+b);
           break;
case 2 : printf("%d",a-b);
           break;
case 3 : printf("%d",a*b);
           break;
case 4 : if(b==0)
           printf("Division by zero is not possible");
           else           
           printf("%f",(float)a/b);
           break;  
default  : printf("Invalid Option");         
}  
return 0;
  }
