#include<stdio.h>
int main () {
    int a, b, c;
    printf(" Nhap vao so nguyen a: ");
    scanf("%d", &a);
    printf(" Nhap vao so nguyen b: ");
    scanf("%d", &b);
    printf(" Nhap vao so nguyen c: ");
    scanf("%d", &c);
    
    if ( a+b > c && a+c > b && b +c > a ) {
        printf("3 so vua nhap la 3 canh cua tam giac\n");
    } else {
        printf("3 so vua nhap khong phai la 3 canh cua tam giac\n");
    }


return 0;
}