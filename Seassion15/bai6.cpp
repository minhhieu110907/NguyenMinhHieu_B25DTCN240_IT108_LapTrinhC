#include<stdio.h>
void bubbleSort ( int a[],int n){
	int change = 0, temp;
	for ( int i =0 ; i<n;i++){
		for ( int j = 0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				change =1;
			}
		}
		}
		if ( change == 0){
			printf("Mang da duoc sap xep");
		}
	}
int main(){
	int n;
	printf("Nhap vao so phan tu: ");
	scanf("%d",&n);
	
	int a[n];
	for ( int i = 0;i<n;i++){
		printf("Nhap phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("Mang cua ban la: ");
	for ( int i =0 ;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nMang cua ban sau khi sap xep tang dan la: ");
	bubbleSort (a,n);

return 0;
}

