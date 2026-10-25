#include<stdio.h>
int main(){
int a,b;
char operator;
printf("Enter operator");
scanf("%c",&operator);
printf("Enter a & b");
scanf("%d%d",&a,&b);
switch(operator){
case '+' : printf("%d",a+b);
           break;
case '-' : printf("%d",a-b);
           break;
case '*' : printf("%d",a*b);
           break;
case '/' : printf("%f",(float)a/b);
           break;
case '%' : printf("%d",a%b);
           break;      
default  : printf("Wrong Operator");         
}  
return 0;
  }