#include<stdio.h>
int sumElement ( int a[],int n){
	int sum =0;
	for ( int i = 0;i<n;i++){
		sum +=a[i];
	}
	return sum;
}
int main(){
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	
	int a[n];
	for ( int i = 0;i<n;i++){
		printf("Nhap phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Mang cua ban la: ");
	for ( int i =0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf ("\nTong so phan tu trong mang la: %d ", sumElement(a,n));
	


return 0;
}

