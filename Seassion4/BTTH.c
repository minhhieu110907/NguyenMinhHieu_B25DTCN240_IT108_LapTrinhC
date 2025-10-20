#include<stdio.h>
int main () {
    int nam_sinh, diem_trung_binh;
    printf(" Nhap nam sinh cua ban vao day: ");
    scanf("%d", &nam_sinh);
    printf("Nhap diem trung binh cua ban vao day: ");
    scanf("%d", &diem_trung_binh);
    if ( nam_sinh > 1900) {
        printf("Nam sinh hop le\n");
        
        int age = 2025 - nam_sinh;
        printf(" Tuoi cua sinh vien la: %d\n",age);

    } else {
        printf("Nam sinh khong hop le\n");
    
    } if( diem_trung_binh < 5) {
        printf("Xep loai yeu\n");
    
    } else if(diem_trung_binh >= 5 && diem_trung_binh <= 6.4) {
        printf("Xep loai trung binh\n");

    } else if( diem_trung_binh >= 6.5 && diem_trung_binh <= 7.9) {
        printf("Xep loai kha \n");

    
    } else {
        printf("Xep loai gioi\n");
    }
       


    return 0;
}