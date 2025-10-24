#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,i,bcnn,ucln;
	
	printf("Moi ban nhap vao so nguyen a: ");
	scanf("%d",&a);
	
	printf("Moi ban nhap vao so nguyen b: ");
	scanf("%d",&b);
	
	for(i=1;i<a && i<b;i++){
		if(a%i == 0 && b ){
			ucln =i;
		}
	}
    bcnn = (abs(a*b))/ucln;
	printf("Boi chung nho nhat cua %d va %d la: %d",a,b,bcnn);
	


return 0;
}

