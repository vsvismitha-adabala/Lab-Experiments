#include<stdio.h>
void main(){
float A,B,C,D,E,F,G,i,J;
printf("Enter A,B,C,D,E,F,G,i");
scanf("%f%f%f%f%f%f%f%f",&A,&B,&C,&D,&E,&F,&G,&i);
printf("%.2f\n",A+B*C+(D*E)+F*G);
printf("%.2f\n",A/B*C-B+A*D/3);
printf("%.2f\n",A+++B---A);
J=(i++)+(++i);
printf("%.2f\n",J);
}
