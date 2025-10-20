#include<stdio.h>
int main () {
int n;
printf("Nhap so nguyen n: ");
scanf( "%d" , &n);
if ( n % 3 == 0 && n % 5 == 0 ) {
    printf("So vua nhap chia het cho 3 va 5\n");
} else if ( n % 3 == 0 ) {
    printf("So vua nhap chia het cho 3\n");
} else if ( n % 5 == 0 ) {
    printf("So vua nhap chia het cho 5\n");
} else {
    printf("%d\n", n);
}


return 0;
}