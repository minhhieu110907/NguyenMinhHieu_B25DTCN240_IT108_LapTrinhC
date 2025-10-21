#include<stdio.h>
int main(){
	float a,b;
	printf(" Moi ban nhap vao so a:");
	scanf("%f", &a );
	printf(" Moi ban nhap vao so b:");
	scanf("%f", &b );
	
	
	if ( a == 0 && b == 0) {
		printf("Phuong trinh vo so nghiem");
	} else if ( a== 0 && b != 0) {
		printf("Phuong trinh vo nghiem");
		
	} else { 
		
		float x= -b/a;
		printf( "Phuong trinh co nghiem la: %.2f", x);
	}


return 0;
}

