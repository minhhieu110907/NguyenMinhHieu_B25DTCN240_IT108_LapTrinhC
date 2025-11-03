#include<stdio.h>
void insertSort (int a[],int n){
    int i,j,key;
    for( int i =1;i<n;i++){
    	key = a[i];
    	j=i-1;
    	while(j>=0 && a[j]>key){
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
	int a[n];
	
	for ( int i = 0; i<n;i++){
		printf("Moi ban nhap vao phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
    }
	printf("\n");
	
	printf("Mang cua ban vua nhap la: ");
	for ( int i = 0; i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	printf("Mang cua ban sau khi sap xep la: ");
	insertSort(a,n);
	for( int i = 0 ; i<n;i++){
	    printf("%d ",a[i]);
    }
	
	


return 0;
}

