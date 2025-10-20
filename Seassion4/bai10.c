#include<stdio.h>
int main () {
    int a,b,c;
    printf(" Nhap vao so nguyen a: ");
    scanf("%d", &a);
    printf(" Nhap vao so nguyen b: ");  
    scanf("%d", &b);
    printf(" Nhap vao so nguyen c: ");
    scanf("%d", &c);

    if ( a >=b && a >=c) {
        if (b >=c) {
            printf("3 so duoc sap xep tu nho den lon la: %d %d %d", c, b, a);
        }else {
            printf("3 so duoc sap xep tu nho den lon la: %d %d %d", b, c, a);
        }
    } else if ( b >= a && b >= c ) {
        if ( a >= c ) {
            printf("3 so duoc sap xep tu nho den lon la: %d %d %d", c, a, b);
        } else {
            printf("3 so duoc sap xep tu nho den lon la: %d %d %d", a, c, b);
        }
    } else {
        if ( a >= b ) {
            printf("3 so duoc sap xep tu nho den lon la: %d %d %d", b, a, c);
        } else {
            printf("3 so duoc sap xep tu nho den lon la: %d %d %d", a, b, c);
        }
    }


return 0;
}