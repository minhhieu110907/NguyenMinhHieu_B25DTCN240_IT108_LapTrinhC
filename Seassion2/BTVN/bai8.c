#include<stdio.h>
int main (){
    int number = 12345; // Lay chu so hang don vi 
    int d1 = number % 10;
    int d2 = (number / 10) % 10;
    int d3 = (number / 100) % 10;
    int d4 = (number / 1000) % 10;
          
    int d5 = number / 10000;  
    

    int result= d2 * 1000 + d3 * 100 + d4 * 10 + d5;
    printf("So dao nguoc la: %d\n", result);







return 0;
                
}