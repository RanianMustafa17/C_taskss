#include<stdio.h>

void main (void){

float  result = 0;
char oper;
int operand1 , operand2 ;
printf ("enter operator + , - , / ,*  \n" );
scanf ("%c" , &oper);
printf ("enter operand one \n");
scanf("%d" , &operand1);
printf ("enter operand two");
scanf("%d" , &operand2);

switch(oper){
    case'+':
    result = operand1 + operand2 ;
    printf("%d" , result);
    break;

  case'-':
     result = operand1 - operand2 ;
     printf("%d" , result);
     break;
case'*':
     result = operand1*operand2 ;
     printf("%d" , result);
     break;
case'/':
     result = operand1 / operand2 ;
     printf("%d" , result);
     break;

}





}
