#include<stdio.h>
void main(void){
int  power;
int num ;
printf ("enter a num");
scanf("%d",&num);
printf("enter the power u want");
scanf("%d", &power);
unsigned int temp =1;
for (int i =0 ; i < power ; i++){
    temp = num * temp; // 1*2 = 2
                       //
}

 printf("%d" ,temp);










}
