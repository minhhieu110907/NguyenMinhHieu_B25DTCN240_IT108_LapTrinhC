#include<stdio.h>
void insertsort( int a [], int n){
	int i,j,key;
	for ( int i =1; i<n;i++){
		key = a [i];
		j= i -1;
		
		while( j>=0 && a[j]> key){
			a[j+1]=a[j];
			j-=1;
		}
		a[j+1]=key;
	}
}
	
int main(){
	int n;
	printf("Moi ban nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	printf("\n");
	
	int a[n];
	for( int i = 0;i<n;i++){
		printf("Moi ban nhap vao phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Mang ban vua nhap la: ");
	for ( int i = 0; i< n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("Mang cua ban nhap sau khi sap xep la: ");
	insertsort ( a,n);
	for ( int i = 0; i< n;i++){
		printf("%d ", a[i]);
	}
	
	printf("\n");
	int numValue;
	printf("Moi nhap vao so ban muon tim: ");
	scanf("%d",&numValue);
	
	printf("\n");
	int start = 0, end = n;
	while( start < end){
		int mid = (start + end)/2;
		if(a[mid]==numValue){
			printf("So %d o vi tri %d trong mang",numValue,mid);
			return 0;
		} else if ( a[mid]> numValue){
			end = mid -1;
		} else {
			start = mid +1;
		}
		
	} printf(" Khong co phan tu nay trong mang");
	


return 0;
}

