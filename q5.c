#include<stdio.h>

void main (void){

int size = 4;
int arr[size];
for (int i = 0 ; i < size ; i++){

printf ("enter %d numbers " , i+1);
    scanf("%d", &arr[i]);

}


for (int i = 0 ; i < size ; i++){
    printf ("%d", arr[i]);
}


int maximum = func (arr , size );
printf ("\n max is : %d " , maximum);


int min = func2 (arr , size );
printf ("\n min is : %d " , min);
}

int func (int arr[] , int size){
    int temp =0 ;
for (int i =0 ; i < size ; i++){
    if (arr[i] > temp)
          {temp = arr[i];
         // printf("max is %d" , temp);

}

}
return temp;
}

int func2 (int arr[] , int size){
    int temp =1000 ;
for (int i =0 ; i < size ; i++){
    if (arr[i] < temp)
          {temp = arr[i];
         // printf("max is %d" , temp);

}

}
return temp;
}

