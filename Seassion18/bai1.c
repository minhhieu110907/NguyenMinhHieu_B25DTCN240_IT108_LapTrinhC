#include<stdio.h>
int main(){
	int a = 10;
	int *p = &a;
	//Cach 1: 
	printf("Dia chi cua bien a la: %d",&a);
	printf("\nGia tri cua bien a la: %d",a);
	//Cach 2:
	printf("\nDia chi cua bien a la: %d",&p);
	printf("\nGia tri cua bien a la: %d",*p);
	



return 0;
}

