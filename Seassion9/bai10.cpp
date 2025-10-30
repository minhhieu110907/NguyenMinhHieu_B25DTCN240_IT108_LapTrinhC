#include<stdio.h>
int main(){
	int n;
	printf("Moi ban nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	
	int a[n];
	for(int i = 0;i<n;i++){
		printf("Moi ban nhap vao phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	printf("Mang ban vua nhap: ");
	for( int i =0; i<n;i++){
		printf("%d ",a[i]);
	} 
	printf("\n");
	int maxcount = 0;
	for ( int i =0;i< n;i++){
		int currentcount = 0;
		for ( int j =0; j<n;j++){
			if(a[j]==a[i]){
				currentcount++;
			}
		}
		if(currentcount>maxcount){
			maxcount=currentcount;
		}
	}
	printf("Tan so cao nhat trong mang la: %d\n",maxcount);
	printf("Cac so co tan so cao nhat la: ");
	
	for ( int i =0; i< n;i++){
		int currentcount = 0;
		for( int j = 0; j<n;j++){
			if(a[j]==a[i]){
				currentcount++;
				
			}
		}
		if(currentcount == maxcount){
			int flag =0;
			for(int h =0; h<i;h++){
				if( a[h]==a[i]){
					flag = 1;
					break;
				}
				}
				if(printed==0){
				printf("%d ",a[i]);
			}
		}
	}
	
	
	
return 0;
}

