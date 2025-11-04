#include<stdio.h>
  void bubbleSort( int a[],int n){
  int change=0, temp;
  for(int i =0;i<n;i++){
  	for (int j =0; j<n-1-i;j++){
  		if(a[j]>a[j+1]){
  			temp = a[j];
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
	int n,h,start,end,mid,flag=0;
	printf("Nhap vao so luong san pham: ");
	scanf("%d",&n);
	
	int a[n];
	printf("---------------Nhap vao gia ban san pham---------------\n ");
	for ( int i =0;i<n;i++){
		printf("Gia ban san pham thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Gia san pham sap xep theo thu tu tang dan: ");
	bubbleSort(a,n);
	for ( int i =0; i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nMoi ban nhap vao san pham co gia nhu ban can tim: ");
	scanf("%d",&h);
	printf("\n");
	
	start =0,end =n-1;
	while( start <= end ){
		mid = (start + end)/2;
		if(a[mid]==h){
			printf("San pham ban can tim o vi tri: %d",mid+1);
			flag=1;
			break;
		} else if ( a[mid]> h){
			end = mid -1;
		} else {
			start = mid +1;
		}
	}
	if ( flag ==0){
		printf("San pham ban tim khong co trong danh sach");
	}
	


return 0;
}

