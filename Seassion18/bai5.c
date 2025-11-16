#include<stdio.h>
#define MAX 1000
void updateElement(int *a, int n, int newValue, int index) {
    if (index >= 0 && index < n) {
        *(a + index) = newValue;  
    } else {
        printf("Chi so %d khong hop le!\n", index);
    }
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
    for (int i = 0; i < n; i++) {
        printf("%d ", *(a + i));  
    }
    printf("\n");
}

int main() {
	int n,newValue,pos,a[MAX];
	getArray(a,&n);

    printf("Mang ban dau: ");
    printArray(a,n);
    
    printf("Nhap vi tri can cap nhat (0-%d): ", n-1);
    scanf("%d", &pos);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    updateElement(a, n, newValue,pos);  

    printf("Mang sau khi cap nhat: ");
    printArray(a, n);

    return 0;
}

