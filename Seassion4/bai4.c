#include<stdio.h>

int main () {
int thang;
printf("Nhap thang trong nam (1-12): ");
scanf( "%d" , &thang);
if ( thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12 ) {
    printf("Thang %d co 31 ngay\n", thang);
} else if ( thang == 4 || thang == 6 || thang == 9 || thang == 11 ) {
    printf("Thang %d co 30 ngay\n", thang);
} else if ( thang == 2 ) {
    printf("Thang %d co 28 hoac 29 ngay\n", thang);
} else {
    printf("Khong phai thang trong nam\n");
    
}







return 0;
}