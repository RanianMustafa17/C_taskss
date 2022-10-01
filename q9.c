#include<stdio.h>

void main (void){
  printf("enter a binary number:");
    int binary;
    int result ;
    int result1 = 0;
    scanf("%d" , &binary);
    int binary2 = binary;
    int counter = 0 ;
   do{
             binary=binary/10;
              counter++;
   }while(binary!=0);
   printf("num of digits = %d \n" , counter);
   printf("binary number = %d \n " , binary2);
   for (int i = 0 ; i < counter ; i++){
    result= binary2 % 2 ;
     printf("digit number %d is %d \n" ,i , result);
     binary2 = binary2 / 10;
    result1 =result1+ result *powerr(2 , i);
   }
    printf("Decimal number is %d\n" , result1);
}

int powerr (int digit , int power){
int first = 1;
for (int i = 0; i < power ; i++){
    first = first * digit;

}
return first;

}
