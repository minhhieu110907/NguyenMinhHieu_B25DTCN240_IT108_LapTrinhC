#include<stdio.h>
int main(){
	float tien_luong,thue_suat,thue_phai_dong;
	printf("Nhap vao tien luong cua ban: ");
	scanf("%f",&tien_luong);
	
	
	if ( tien_luong >10) {
		thue_suat= 0.15;
	} else if ( tien_luong >5) {
		thue_suat= 0.1;
	
	} else {
		thue_suat=0.05;
	}

	 thue_phai_dong = tien_luong * thue_suat;
	printf("Tien thue phai dong la: %.2f", thue_phai_dong);
	
	
	


return 0;
}

