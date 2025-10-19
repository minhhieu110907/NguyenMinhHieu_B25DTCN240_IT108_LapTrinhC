#include<stdio.h>
int main() {
    int songuyen;
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &songuyen);

    int sodonvi= songuyen % 10;
    int sochuc= (songuyen / 10) % 10;
    int sohangtram= (songuyen / 100) % 10;
    int sohangnghin= (songuyen / 1000) % 10;
    int sodaonguoc= sodonvi * 1000 + sochuc * 100 + sohangtram * 10 + sohangnghin;
    printf("So dao nguoc cua so %d la: %d\n", songuyen, sodaonguoc);

    return 0;
}