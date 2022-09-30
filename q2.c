#include<stdio.h>


void main (void){
typedef int uint32_t ;
uint32_t year;
printf("enter a year : ");
scanf ("%d" , &year);

if (year % 4 == 0){
    printf ("%d it's leap year" , year);
}
else printf ("%d it's not a leap year", year);





}
