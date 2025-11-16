#include <stdio.h>
#define MAX 1000
int searchElement(int *a, int n, int value) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) == value) {  
            return i;             
        }
    }
    return -1; 
}
void getArray (int *a,int *n){
	printf("Moi nhap vao so phan tu: ");
	scanf("%d",n);
	for ( int i =0;i<*n;i++){
		printf("Moi ban nhap vao phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void printArray(int *a, int n) {
	printf("Mang cua ban la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(a + i)); 
    }
}

int main() {
    int value;
    int n,a[MAX];
    getArray(a,&n);
    printArray(a,n);
    
    printf("\nMoi nhap vao gia tri muon tim kiem: ");
    scanf("%d",&value);
    int pos = searchElement(a, n, value);

    if (pos != -1) {
        printf("%d\n", pos);  
    } else {
        printf("Khong tim thay phan tu %d\n", value);
    }

    return 0;
}

