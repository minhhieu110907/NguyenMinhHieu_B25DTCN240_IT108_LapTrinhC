#include<stdio.h>
int main(){
	int i,n,chuso;
	int sochia = 1;
	
	printf("Moi ban nhap vao 1 so nguyen: ");
	scanf("%d",&n);
	if (n==0) {
		printf("0");
	
	} else {

	i = n;
	while(i>10) {
		sochia *=10;
		i /=10;
	}
	while ( sochia >0) {
		chuso= n/sochia;
		printf("%d ",chuso);
		n %=sochia;
		sochia /= 10;
   }  
		printf("\n");
   }


return 0;
}

