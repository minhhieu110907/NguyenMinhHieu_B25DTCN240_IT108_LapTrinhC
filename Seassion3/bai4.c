#include<stdio.h>
int main() {
float diemtooan, diemvan, diemanh;
printf("Nhap diem toan: ");
scanf("%f", &diemtooan);
printf("Nhap diem van: ");
scanf("%f", &diemvan);
printf("Nhap diem anh: ");
scanf("%f", &diemanh);
float tongdiem = diemtooan + diemvan + diemanh;
printf("Tong diem ba mon la: %.2f\n", tongdiem);
float diemtrungbinh = tongdiem / 3;
printf("Diem trung binh ba mon la: %.2f\n", diemtrungbinh);


return 0;
}