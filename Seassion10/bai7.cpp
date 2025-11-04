#include<stdio.h>
void bubbleSort(int a[],int n){
	 int change = 0, temp;
	 for(int i =0;i<n;i++){
	 	for(int j =0;j<n-i-1;j++){
	 		if(a[j]>a[j+1]){
	 			temp=a[j];
	 			a[j]=a[j+1];
	 			a[j+1]=temp;
	 			change =1;
			 }
		 }
		 if (change ==0){
		 	break;
		 }
	 }
}

int main(){
	int n;
	printf("Moi ban nhap vao so phan tu: ");
	scanf("%d", &n);
	
	int a[n];
	for(int i =0;i<n;i++){
		printf("Nhap vao phan tu a[%d]: ",i);
		scanf("%d", &a[i]);
	}
	printf("\n");
	
	printf("Mang ban vua nhap: ");
	for(int i =0;i<n;i++){
	printf("%d ",a[i]);
    }
    printf("\n");
	
	printf("Mang sap xep theo thu tu tang dan: ");
	bubbleSort(a,n);
	for ( int i = 0;i<n;i++){
		printf("%d ",a[i]);
	}
	int start =0 , end = n-1,mid,numValue;
	printf("Moi ban nhap vao so muon tim: ");
	scanf("%d",&numValue);
	
	while ( start<end){
		mid = (start+end)/2;
		if(a[mid]== numValue){
			printf("So can tim o vi tri %d",mid);
			flag =1;
			break;
		} else if( a[mid]>numValue){
			end = mid -1;
		} else {
			start = mid +1;
		}
	}
	if ( flag ==0){
		printf("Khong tim thay");
	}


return 0;
}

