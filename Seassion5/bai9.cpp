#include<stdio.h>
    int main(){
	    float he_so_luong;
	    int ngay_cong, chuc_vu, phu_cap, thuong;
	
	    printf("Moi ban nhap vao he so luong: ");
	    scanf("%f",&he_so_luong);
	
	    printf("Moi ban nhap vao so ngay cong: ");
	    scanf("%d",&ngay_cong);
	      if (ngay_cong > 26){
	      	thuong = 200000; // thuong 200k 1 ngay tu ngay cong thu 27
		  }
	
	    printf("Moi ban nhap vao chuc vu(1. nhan vien 2. to truong 3. quan ly): ");
	    scanf("%d",&chuc_vu);
	
	    switch( chuc_vu ) {
	    	case 1:
	    		phu_cap = 500000;
	    		break;
	    	case 2:
	    		phu_cap = 1000000;
	    		break;
	    	case 3 :
	    		phu_cap = 2000000;
	    		break;
	    	
	    }
	
	float luong = he_so_luong * ngay_cong * 160000 + phu_cap + thuong * (ngay_cong - 26);
	printf("Luong cua ban la: %.0f VND", luong);
	
	    
	    
	    		
	
	


return 0;
}

