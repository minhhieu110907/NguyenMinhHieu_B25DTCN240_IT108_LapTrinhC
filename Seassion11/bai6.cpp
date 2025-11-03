#include<stdio.h>

int main(){
    int n;
    do {
        printf("Moi ban nhap vao so phan tu cua mang: ");
        scanf("%d", &n);
        if(n < 2){
            printf("Mang qua ngan, vui long nhap lai!\n");
        }
    } while(n < 2);
    
    int a[n]; 
    printf("Nhap vao mang:\n");
    for(int i = 0; i < n; i++){
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Mang cua ban la: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    int max1, max2;

    if(a[0] > a[1]){
        max1 = a[0];
        max2 = a[1];
    } else {
        max1 = a[1];
        max2 = a[0];
    }

    for(int i = 2; i < n; i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        } else if(a[i] > max2 && a[i] != max1){
            max2 = a[i];
        }
    }

    printf("So lon nhat la: %d\n", max1);
    printf("So lon thu 2 la: %d\n", max2);

    return 0;
}

