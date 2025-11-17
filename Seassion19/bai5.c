#include<stdio.h>
int compareArrays(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) != *(b + i)) {
            return 0;
        }
    }
    return 1; 
}
void getArray(int *a,int n){
	for ( int i =0;i<n;i++){
		printf("Nhap phan tu tai vi tri index %d: ",i);
		scanf("%d",(a+i));
	}
}
void putArray(int *a,int n){
	printf("\nMang cua ban la: ");
	for ( int i = 0;i<n;i++){
		printf("%d ",*(a+i));
	}
}
int main(){
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	int a[n],b[n];
	
	getArray(a,n);
	putArray(a,n);
	printf("\n");
	
	getArray(b,n);
	putArray(b,n);
	
	int result = compareArrays(a, b, n);
    if (result == 1) {
        printf("\nHai mang giong nhau.\n");
    } else {
        printf("\nHai mang khac nhau.\n");
    }


return 0;
}

