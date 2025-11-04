#include<stdio.h>
void selectionSort(int a[],int n){
	int temp,minIndex;
	for ( int i =0;i<n-1;i++){
		minIndex=i;
		for(int j =i +1;j<n;j++){
			if(a[j]<a[minIndex]){
				minIndex = j;
			}
		}
		if(minIndex !=i){
			temp = a[i];
			a[i]=a[minIndex];
			a[minIndex]=temp;
		}
	}
}
int linearSearch(int a[],int n,int x){
	for ( int i =0;i<n;i++){
		if(a[i]==x){
			return i;
		}
	}
	return -1;
}
int main(){
	int n;
	printf("Moi nhap vao so luong phan tu: ");
	scanf("%d", &n);
	
	int a[n],start=0,end=n-1,mid,numValue,flag =0;
	for ( int i =0;i<n;i++){
		printf("Nhap vao phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	selectionSort(a,n);
	printf("\nMang sau khi sap xep la: ");
		for(int i =0;i<n;i++){
			printf("%d ",a[i]);
		}
		
		printf("\nSo nguyen nho nhat trong mang la: ");
		for ( int i =0;i<1;i++){
			printf("%d",a[i]);
		} 
		
	printf("\nNhap vao so ban muon tim kiem: ");
	scanf("%d",&numValue);
	
	while ( start<=end){
		mid =(start+end)/2;
		if(a[mid] == numValue){
			printf("So ban can tim o vi tri %d",mid);
			flag =1;
			break;
		} else if ( a[mid]>numValue){
			end= mid -1;
		} else {
			start = mid +1;
	    }	
	}
    if(flag ==0){
    	printf("So ban muon tim khong co trong mang");
	}
return 0;
}

