#include<stdio.h>
void average( int *a, int n){
	int sum = 0;
	for ( int i = 0;i < n ; i++){
		sum += *(a+i);
	}
	float average = sum/n;
	printf("\nTrung binh cua mang la: %.2f",average);
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
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	
	int a[n];
	getArray(a,n);
	putArray(a,n);
	average(a,n);



return 0;
}

