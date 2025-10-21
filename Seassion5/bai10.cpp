#include<stdio.h>
int main(){
	int so_dien, loai_ho, tien1kwh, tiendien;
	float phu_phi;
	
	printf("Moi ban nhap vao so dien da su dung: ");
	scanf("%d",&so_dien);
	
	printf("Moi ban nhap vao loai ho tieu dung (1. Ho gia dinh 2.Ho kinh doanh 3. Ho san xuat): ");
	scanf("%d",&loai_ho);
	
	if ( so_dien > 200) {
		tien1kwh = 3000;
		
	} else if ( so_dien >= 101) {
		tien1kwh = 2500;
		
	} else if ( so_dien >= 51){
		tien1kwh = 2000;
		
	} else {
		tien1kwh = 1500;
	}
	
	tiendien = tien1kwh * so_dien;
	
	switch (loai_ho) {
		case 1:
			phu_phi = 0.05 * tiendien;
			break;
		
		case 2:
			phu_phi = 0.1 * tiendien;
			break;
			
		case 3:
			phu_phi = 0.08 * tiendien;
			break;
			
	}
			
	
	float tienphaitra = tiendien + phu_phi;
	printf("So tien ban phai tra la: %.0f VND",tienphaitra);
	
    
   
	


return 0;
}

