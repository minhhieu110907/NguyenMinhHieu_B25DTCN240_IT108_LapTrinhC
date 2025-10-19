#include<stdio.h>
int main() {
int number;
printf("Nhap mot so nguyen co 4 chu so: ");
scanf("%d", &number);
int sodonvi= number % 10;
int sochuc= (number / 10) % 10;
int sohangtram= (number / 100) % 10;
int sohangnghin= (number / 1000) % 10;
int tongcacchuaso= sodonvi + sochuc + sohangtram + sohangnghin;
printf("Tong cac chu so cua so %d la: %d\n", number, tongcacchuaso);

return 0;
}