#include<stdio.h>
void countValue(int *a,int n,int x){
	int count = 0;
	for ( int i =0;i<n;i++){
			if ( *(a+i) == x){
				count++;
			}
		}
	printf("So %d xuat hien %d lan trong mang",x,count);
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
	int n,c;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	
	int a[n];
	getArray(a,n);
	putArray(a,n);
	
	printf("\nNhap vao so muon tim: ");
	scanf("%d",&c);
	countValue(a,n,c);



return 0;
}

