#include<stdio.h>
typedef int uint32_t  ;
void main (void){
uint32_t num ;
printf ("enter any number" );
scanf("%d" , &num);
uint32_t zeros = 0;
uint32_t ones = 0 ;
uint32_t mod;
do{
mod = num %2 ;
printf("%d" , mod);
if (mod == 1 ) {ones ++ ;}
else {zeros ++ ;}
num = num /2 ;
}while(num != 0);

printf("\n zeros are : %d and ones are :%d" ,zeros , ones  );


}
