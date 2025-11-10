#include<stdio.h>
void putArray ( int a[], int n){
	for ( int i =0;i<n;i++){
		printf("Moi ban nhap vao phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void printfArray ( int a[],int n){
	for ( int i =0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n;
	printf("Moi nhap so phan tu: ");
	scanf("%d",&n);
	
	int a[n];
	putArray(a,n);
	printf("Mang ban vua nhap la: ");
	printfArray(a,n);
	


return 0;
}

