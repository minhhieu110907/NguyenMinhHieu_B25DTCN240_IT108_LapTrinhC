#include<stdio.h>
int main(){
	int thetich, tien_nuoc;
	printf("Moi ban nhap vao the tich nuoc da su dung: ");
	scanf("%d",&thetich);
	
	if ( thetich >= 0 && thetich <= 10) {
		tien_nuoc = thetich * 6000;
		printf("So tien ban phai tra la: %d VND", tien_nuoc);
		
		
	} else if ( thetich >= 11 && thetich <= 20) {
		tien_nuoc = 10 * 6000 + (thetich -10) * 7000;
		printf("So tien ban phai tra la: %d VND", tien_nuoc);
		
	} else if ( thetich >= 21 && thetich <= 30) {
		tien_nuoc = 10 * 6000 + 10 * 7000 + (thetich - 20) * 8500;
		printf("So tien ban phai tra la: %d VND", tien_nuoc);
		
	} else {
		tien_nuoc = 10 *  6000 + 10 * 7000 + 10 * 8500 + (tien_nuoc) * 10000;
		printf("So tien ban phai tra la: %d VND", tien_nuoc);
	}
	
	


return 0;
}

