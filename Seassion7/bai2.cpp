#include<stdio.h>
int main(){
	int n,i,tich=1;
	printf("Moi ban nhap vao so nguyen: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		tich*=i;		
	}
	printf("%d! la: %d",n,tich);


return 0;
}

