#include<stdio.h>
#define MAX 1000
void countEvenOdd ( int *a,int n,int *even,int *odd){
	printf("\nSo chan trong mang la: ");
	for ( int i = 0;i<n;i++){
		if ( *(a+i) % 2 == 0){
			printf("%d ",*(a+i));
	}
    }
    printf("\nSo le trong mang la: ");
   	for ( int i = 0;i<n;i++){
		if ( *(a+i) % 2 != 0){
			printf("%d ",*(a+i));
}
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
int main(){
	int n,even,odd;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	
	int a[n];
	getArray(a,n);
	putArray(a,n);
	countEvenOdd(a,n,&even,&odd);
	



return 0;
}

