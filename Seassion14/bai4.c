#include<stdio.h>
void putArray ( int a[],int n){
	for ( int i =0; i<n;i++){
		printf("Nhap vao phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void printfArray ( int a[],int n){
	for ( int i =0;i<n;i++){
		printf ("%d ",a[i]);
	}
}
int main(){
	int n;
	printf("Moi nhap so phan tu: ");
	scanf("%d",&n);
	
	int a[n];
    putArray(a,n);
    printfArray(a,n);

return 0;
}

