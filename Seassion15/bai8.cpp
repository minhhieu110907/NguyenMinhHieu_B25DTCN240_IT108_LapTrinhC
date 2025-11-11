#include<stdio.h>
int removeDuplicate ( int a[],int n){
	int m =0, duplicateIndex,flag=0,newsize = n;
	for ( int i =0 ; i<newsize;i++){
		for (int j = i+1 ;j<newsize;j++){
			if ( a[j]==a[i]){
				for ( int k = j;k<newsize-1;k++){
					a[k]=a[k+1];
				newsize--;
		    }
		}
			else {
				j++;
			}
		}
		    }
	return newsize;
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
     
   int newarr = removeDuplicate ( a,n);
   printf("Mang cua ban sau khi loai bo trung lap: ");
   for ( int i =0;i<newarr;i++){
   	printf("%d ",a[i]);
   }


return 0;
}

