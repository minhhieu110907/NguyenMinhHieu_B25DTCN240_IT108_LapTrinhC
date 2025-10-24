#include<stdio.h>
int main(){
	int i,tong=0,n;
	printf("Moi ban nhap vao 1 so nguyen duong: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		tong=tong + i;
	
	}
	printf("Tong tu 1 den %d la: %d\n",n, tong);
	
	


return 0;
}

