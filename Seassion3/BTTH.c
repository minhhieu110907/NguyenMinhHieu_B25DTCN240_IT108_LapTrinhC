#include<stdio.h>
#include<math.h>
int main() {
int a,b;
printf("Nhap so nguyen duong a: ");
scanf("%d",&a);  
printf("Nhap so nguyen duong b: ");
scanf("%d",&b);

float S = sqrt( pow(a,2) + pow(b,2) )/(a + b) + ( sqrt(a) + sqrt(b) )/(a * b);
printf("Gia tri cua S la: %.2f\n", S);






return 0;
}