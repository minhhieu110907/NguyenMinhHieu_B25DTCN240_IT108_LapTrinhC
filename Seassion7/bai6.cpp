#include<stdio.h>
int main(){
	int n,socuoi,i;
	printf("Nhap vao so nguyen: ");
	scanf("%d",&n);

	i=n;
	while(n > 0){
		socuoi=n%10;
		n/=10;
		printf("%d",socuoi);
	}
	
	

return 0;
}

