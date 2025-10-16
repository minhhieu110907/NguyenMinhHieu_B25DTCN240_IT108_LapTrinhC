#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){ 


    int a=5 , b= 3 , c = 2;

    float S = ( sqrt ( pow ( a , 2) + pow ( b , 2)) / ( c +1)) + ( a * b) / c - sqrt ( abs (a-b) + pow ( c,2));

    printf(" Ket qua cua phuong trinh S la = %f", S);

return 0;
}