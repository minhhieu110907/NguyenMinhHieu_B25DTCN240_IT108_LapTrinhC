#include <stdio.h>
#define MAX 1000

void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);   
    }
}

void getArray(int *a,int n){
	for ( int i =0;i<n;i++){
		printf("Nhap a[%d]: ",i);
		scanf("%d",(a+i));
	}
}

void putArray(int *a,int n){
	printf("\nMang cua ban la: ");
	for ( int i = 0;i<n;i++){
		printf("%d ",*(a+i));
	}
}
int main() {
    int n;
    int a[MAX], b[MAX];

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    getArray(a,n);
    putArray(a,n);

  
    copyArray(a, b, n);
    printf("\nMang B sau khi sao chep tu A:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}

