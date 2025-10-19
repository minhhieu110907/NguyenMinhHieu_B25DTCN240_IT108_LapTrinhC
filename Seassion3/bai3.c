#include<stdio.h>
#include<math.h>

int main() {
    float bankinh;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &bankinh);
    float dientich = pow(bankinh, 2) * M_PI;
    printf("Dien tich hinh tron la: %.2f\n", dientich);
    

return 0;
}