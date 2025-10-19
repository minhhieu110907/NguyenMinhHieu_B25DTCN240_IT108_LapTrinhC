#include<stdio.h>
#include<math.h>
int main() {
int a,b;
printf("Nhap so a: ");
scanf("%d",&a);
printf("Nhap so b: ");
scanf("%d",&b);

float S = sqrt( a + sqrt(b +1) ) + sqrt ( b + sqrt (pow(a,2)  + pow(b,2)));
printf("Gia tri cua S la: %.2f\n", S);


return 0;
}