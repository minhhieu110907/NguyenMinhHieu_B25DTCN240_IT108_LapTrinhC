#include<stdio.h>
void bubbleSort (int a[],int n){
	int count =0,temp;
	if(n<2){
		printf("Mang qua ngan de sap xep");
		return;
	}
	for( int i = 0; i<n;i++){
		for(int j =0;j<n-i-1;j++){
		  if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			count=1;
		}
	}
	if(count == 0){
		break;
	}
}
}
int main() {
	int n,start =0,end,mid,numValue,flag=0;
	printf("Moi ban nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	printf("\n");
	
	int a[n];
	printf("Moi ban nhap vao mang: ");
	for( int i =0; i<n;i++){
		printf("Nhap vao phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n"); 
	
	printf("Mang cua ban la: ");
	for (int i = 0 ; i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n"); 
	
	printf("Mang cua ban sau khi sap xep la: ");
	bubbleSort(a,n);
	for(int i =0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	printf("Moi ban nhap vao so muon tim: ");
	scanf("%d", &numValue);
	
	end=n-1;
	while(start<=end){
		mid = (start+end)/2;
		if (a[mid]==numValue){
		printf("So ban can tim o vi tri index %d trong mang",mid);
		flag =1;
		break;
	} else if(a[mid]>numValue){
		end = mid-1;
	} else {
		start = mid +1;
	}
    }
	if(flag==0){
		printf("Khong tim thay so ban nhap trong mang");
	}  
	

return 0;
}

