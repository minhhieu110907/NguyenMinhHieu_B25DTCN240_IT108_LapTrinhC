#include<stdio.h>
int main () {
    int ngay,thang,nam ;
    printf(" Nhap ngay: ");
    scanf("%d", &ngay);
    printf(" Nhap thang: ");
    scanf("%d", &thang);
    printf(" Nhap nam: ");
    scanf("%d", &nam);
    
    
    if( thang >=1 && thang <= 12
        && thang == 1|| thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12 && ngay >=1 && ngay <=31
        || thang == 4 || thang == 6 || thang == 9 || thang == 11 && ngay >=1 && ngay <=30
        || thang == 2 && ( ( nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0 ) && ngay >=1 && ngay <=29
                          || ( nam % 4 != 0 || nam % 100 == 0 && nam % 400 != 0 ) && ngay >=1 && ngay <=28 ) ) {
        printf("%d/%d/%d la ngay hop le", ngay, thang, nam);
    
    }else {
        printf("%d/%d/%d khong phai la ngay hop le", ngay, thang, nam);
    }
return 0;
}