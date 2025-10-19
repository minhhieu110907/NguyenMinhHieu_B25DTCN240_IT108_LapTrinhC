#include<stdio.h>
int main() {
int n;
printf("Nhap mot so nguyen >1: ");
scanf("%d",&n);


float phan_so_1 = 1.00/((n-1) * n);
float phan_so_2 = 1.00/(n * (n+1));
float phan_so_3 = 1.00/((n+1) * (n+2));
float tong = phan_so_1 + phan_so_2 + phan_so_3;
printf("Tong cua A la: %.2f\n", tong);



return 0;
}