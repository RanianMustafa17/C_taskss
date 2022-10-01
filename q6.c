#include<stdio.h>
#include<stdlib.h>


void main (void){
    static int counteven =0;
int size ;

printf ("enter array size");
scanf ("%d" , &size);
int * ptr = (int *) malloc ( size);
printf("size is %d \n" , size);

for (int i = 0 ; i < size ; i++){
    printf ("enter %d element", i+1);
    scanf("%d" , ptr + i);
}

for (int i = 0 ; i < size ; i++){
    printf("%d" , *(ptr+i));
}

for (int i = 0 ; i < size ; i++){
    if (ptr[i] %2 ==0){
        counteven ++;
    }
}
printf("\n even numbers are : %d" ,counteven);
int oddnumbers = size - counteven;
printf("\n odd numbers are : %d" ,oddnumbers);
}
