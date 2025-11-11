#include<stdio.h>
	void bubbleSort ( int a[],int n){
     int change,tempvar;
     if(n<=2){
     	printf("Mang qua ngan.");
     	return;
	 }
     for ( int i =0 ; i<n;i++){
     	change = 0;
     	for( int j =0; j<n-i-1;j++){
     		if(a[j]>a[j+1]){
     			tempvar = a[j];
     			a[j]=a[j+1];
     			a[j+1]=tempvar;
     			change = 1;
			 }
		 } if ( change == 0){
		 	break;
		 }
	 }
}

    int  binarySearch (int a[],int start,int end,int x){
    	int mid=(start+end)/2;
    	if ( start <= end ){
    		if(a[mid]==x){
    			return mid;
			} else if (a[mid]>x){
				return binarySearch(a,start,mid-1,x);
			} else {
				return binarySearch(a,mid+1,end,x);
			}
			}
			return -1;
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
	bubbleSort(a,n);
	printf("Mang sau khi sap xep la: ");
	for ( int i =0;i<n;i++){
		printf("%d ",a[i]);
	}
	int x;
	printf("Moi ban nhap so: ");
	scanf("%d",&x);
	int pos = binarySearch(a,0,n-1,x);
	if ( pos != -1){
		printf("Tim thay so tai vi tri index %d",pos);
	} else {
		printf("Khong tim thay");
	}


return 0;
}

