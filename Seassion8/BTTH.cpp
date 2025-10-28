#include<stdio.h>
	void sapxep(int a [],int n) {
			if(n<=2){
			printf("Mang qua ngan de sap xep");
			}
			int bientam;
			for(int i=0;i<n-1;i++){
				int doicho=0;
				for(int j=0;j<n-1;j++){
					if(a[j]>a[j+1]) {
					    bientam = a[j];
						a[j]=a[j+1];
						a[j+1]=bientam;
						doicho+=1;
					}
				}
				if(doicho==0){
					break;
					}
			}
   } 
int main(){
	int a[100]={11,12,14,54,71};
	int n = 5;
	int i=0;
	int luachon1,luachon2,nhapso,vitrichen,giatrichen,vitrixoa;
	do{
		printf("\n");
		printf("-------------Quan ly danh sach so nguyen-------------\n");
		printf("1. Them phan tu vao vi tri bat ky\n");
        printf("2. Xoa phan tu o vi tri bat ky\n");
        printf("3. Cap nhat gia tri tai vi tri bat ky\n");
        printf("4. Tim kiem phan tu trong mang\n");
        printf("5. Hien thi mang\n");
        printf("6. Sap xep mang (Bubble Sort)\n");
        printf("7. Thoat chuong trinh\n");
        
        printf("Moi ban nhap vao lua chon cua minh: ",luachon1);
        scanf("%d",&luachon1);
        
        switch(luachon1){
        	case 1:
        	    if(n==100){
        	    	printf("Mang da day khong the them\n");
        	    	break;
				}
        		do 
        		{
        		printf("Nhap vao vi tri ban muon them: ");
        		scanf("%d",&vitrichen);
        		if (vitrichen < 0 || vitrichen > n) {
						printf("Vi tri khong hop le! Vui long nhap lai.\n");
					}
					
				} while (vitrichen < 0 || vitrichen > n);
        		
        		printf("Nhap vao gia tri ban muon them: ");
        		scanf("%d",&giatrichen);
        		
        		for(int i = n-1;i>= vitrichen;i--){ 
        		a[i+1]=a[i];
        	    }
        	    a[vitrichen]=giatrichen;
        	    n++;
        	    printf("Da them phan tu %d vao vi tri %d\n",giatrichen,vitrichen);
        		break;
        		
			case 2:
				if(n== 0){
					printf("Mang rong");
					break;
				}
				do 
        		{	
        		printf("Nhap vao vi tri ban muon xoa: ");
        		scanf("%d",&vitrixoa);
        		if (vitrixoa < 0 || vitrixoa >= n) {
						printf("Vi tri khong hop le! Vui long nhap lai.\n");
					}
					
				} while (vitrixoa < 0 || vitrixoa >= n);
				for(int i= vitrixoa;i<=n-1;i--){
					a[i+1]=a[i];
				}
				n--;
				break;
				
			case 3:
            int viTriCapNhat;
            int giaTriMoi;

           
            if (n == 0) {
                printf("Mang da rong, khong co gi de cap nhat!\n");
                break; 
            }
            do {
                printf("Nhap vao vi tri ban muon cap nhat (tu 0 den %d): ", n - 1);
                scanf("%d", &viTriCapNhat);
                
                if (viTriCapNhat < 0 || viTriCapNhat >= n) { 
                    printf("Vi tri khong hop le! Vui long nhap lai.\n");
                }
            } while (viTriCapNhat < 0 || viTriCapNhat >= n);

            printf("Gia tri hien tai tai vi tri %d la: %d\n", viTriCapNhat, a[viTriCapNhat]);
            printf("Nhap gia tri moi de cap nhat: ");
            scanf("%d", &giaTriMoi);

            a[viTriCapNhat] = giaTriMoi;

            printf("Gia tri vi tri %d sau khi cap nhat la: %d",viTriCapNhat,a[viTriCapNhat]);
            break;
				
        		
        	case 4:
        		do
				{
        	  printf("Nhap thu tu phan tu ban muon tim kiem: ");
              scanf("%d",&nhapso);
              if(nhapso>4){
              	printf("So thu tu phan tu ban nhap khong ton tai\n");
              	printf("\n");
			  }
			  } while(nhapso>4);
            
              printf("Phan tu thu %d trong mang la: %d",nhapso,a[nhapso]);
              break;
        		
        	case 5:
        		for(int i =0; i<n;i++){
        			printf("%d ",a[i]);
				}
				break;
			case 6:
				  sapxep(a,n);
				printf("Mang ban dau la:11 12 14 54 71\n");
				printf("Mang sau khi sap xep la: ");
			
				for(int i=0;i<n;i++){
					printf("%d ",a[i]);
				}
			break;
			case 7:
				printf("Chuong trinh ket thuc.Cam on ban");
				
    }
	} while ( luachon1 !=7);

return 0;
}

