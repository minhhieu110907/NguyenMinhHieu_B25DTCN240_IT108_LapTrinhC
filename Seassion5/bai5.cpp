#include<stdio.h>
int main(){
	int tuoi;
	float tien_phai_tra;
	printf("Moi ban nhap tuoi tai day: ");
	scanf("%d",&tuoi);
	
	int gia_mac_dinh = 20000;
	if (tuoi > 60) {
		tien_phai_tra = gia_mac_dinh * 0.7;
		printf("So tien xe bus ban phai tra la: %.0f VND", tien_phai_tra);
		
	} else if (tuoi >= 19) {
		tien_phai_tra = gia_mac_dinh; 
		printf("So tien xe bus ban phai tra la: %.0f VND", tien_phai_tra);
		
	} else if ( tuoi >= 6) {
		tien_phai_tra = gia_mac_dinh * 0.5;
		printf("So tien xe bus ban phai tra la: %.0f VND",tien_phai_tra);
		
	} else {
		tien_phai_tra = 0;
		printf(" So tien xe bus ban phai tra la: %.0f VND", tien_phai_tra);
	
	}
	


return 0;
}

