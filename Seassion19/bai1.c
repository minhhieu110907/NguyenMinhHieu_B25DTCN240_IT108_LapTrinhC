#include<stdio.h>
void findMax(int *a,int n){
	int MAX = a[0];
	for( int i =0;i<n;i++){
		if(*(a+i)>MAX){
			MAX = *(a+i);
		}
	}
	printf("\nSo lon nhat trong mang la: %d",MAX);
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
	findMax(a,n);



return 0;
}

