#include<stdio.h> 
int main() {
int celsius;
printf("Nhap nhiet do hien tai: ");
scanf("%d", &celsius);
float Fahrenheit = (celsius * 9 / 5) + 32;
printf("Nhiet do F: %.2f\n", Fahrenheit);



return 0;
}