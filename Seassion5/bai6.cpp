#include<stdio.h>
int main(){
	float a,b;
	char toantu ;
	printf("Moi ban nhap vao so a: ");
	scanf("%f",&a) ;
	
	printf("Moi ban nhap vao so b: ");
	scanf("%f",&b) ;
	
	printf("Moi ban nhap vao toan tu: ");
	scanf(" %c", &toantu );
	
	switch (toantu) {
		case '+': {
            float tong = a + b;
			printf("Ket qua cua phep tinh la: %.2f", tong);
			break;
		 }
		case '-' : {
			float hieu = a - b;
			printf("Ket qua cua phep tinh la: %.2f", hieu);
			break;
		}
			
		case '*': {
			float tich = a * b;
			printf("Ket qua cua phep tinh la: %.2f", tich);
			break;
		}
					
		case '/': {
			if ( b==0 ) {
				printf("Loi: Khong the chia cho 0");
				
			} else {
				float thuong = a/b;
				printf ("Ket qua phep tinh la: %.2f", thuong );
				
			}
			
            break;
        }
		
	
		default: {
			printf("Loi: Toan tu khong hop le");
			break;

        }
			
			
		

			
	}
	

return 0;
}

