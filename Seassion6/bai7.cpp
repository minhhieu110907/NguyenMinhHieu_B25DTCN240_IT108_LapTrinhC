#include<stdio.h>
int main(){
	int a,b,i,ucln;
	printf("Moi ban nhap vao so nguyen duong a: ");
	scanf("%d",&a);
	
	printf("Moi ban nhap vao so nguyen duong b:");
	scanf("%d",&b);
	
	for(i=1;i<a && i<b;i++){
		if(a%i==0 && b%i==0){
			ucln = i ;
		}
	}
	printf("Uoc chung lon nhat cua %d va %d la: %d",a,b,ucln);


return 0;
}

