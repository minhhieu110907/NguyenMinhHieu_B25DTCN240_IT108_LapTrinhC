#include<stdio.h>
int main(){
	int i,n,tich;
	
	do {
		printf("Moi ban nhap vao so nguyen n (1-10): ");
	scanf("%d",&n);
	
	if(n<1 || n>10){
		printf("So khong hop le, moi ban nhap lai\n: ");
		}
	} while (n<1 || n>10);
	
	printf("Bang cuu chuong %d:\n",n);
	 for(i=1;i<=10;i++) {
	 tich =i * n;
	   printf("%d * %d = %d\n",n,i,tich);
	}

	
return 0;
}
