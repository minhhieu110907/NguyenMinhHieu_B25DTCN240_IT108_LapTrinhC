#include<stdio.h>
int main(){
	int numElements,fre;
	printf("Moi ban nhap vao so phan tu: ");
	scanf("%d",&numElements);
	
	int a[numElements];
	for(int i = 0;i<numElements;i++){
		printf("Moi ban nhap vao phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("Mang cua ban nhap gom cac phan tu: ");
	for(int i = 0; i<numElements;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	int mostfre =a[0];
	int maxcount = 0;
	for(int i = 0;i<numElements;i++){
		int currentcount = 0;
		for (int j = 0;j < numElements;j++){
			if(a[j]==a[i]){
				currentcount++;
			}
	    }
		
	if(currentcount > maxcount){
		maxcount=currentcount;
		mostfre =a[i];	
	    }
    }   

	printf("So xuat hien nhieu nhat trong mang la: %d ( %d lan xuat hien)",mostfre,maxcount);


return 0;
}

