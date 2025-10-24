#include<stdio.h>
int main(){
	int luachon,a,b,c;
	float tbc;
	do{
	printf("Moi ban chon cac lua chon sau (1. Nhap 3 so 2. Tinh tong 3.Trung binh cong 4.So nho nhat 5.So lon nhat 6.Ket thuc): ");
	scanf("%d",&luachon);
	
	
		switch(luachon){
			case 1:
				printf("Moi ban nhap vao 3 so nguyen a,b,c: ");
				scanf("%d%d%d",&a,&b,&c);
				break;
				
			case 2:
				printf("Moi ban nhap vao 3 so nguyen a,b,c: ");
				scanf("%d%d%d",&a,&b,&c);
				
				printf("%d + %d + %d = %d\n",a,b,c,a +b +c);
				printf("\n");
				break;
			
			case 3:
				printf("Moi ban nhap vao 3 so nguyen a,b,c: ");
				scanf("%d%d%d",&a,&b,&c);
				
				 tbc = (a+b+c)/3;
				printf("Trung binh cong cua 3 so %d,%d,%d la: %.2f\n",a,b,c,tbc);
				printf("\n");
				break;
				
			case 4:
				printf("Moi ban nhap vao 3 so nguyen a,b,c: ");
				scanf("%d%d%d",&a,&b,&c);
					
				if (a<b && a<c){
					printf("So %d nho nhat trong 3 so\n",a);
					printf("\n");
				} else if (b<c){
					printf("So %d nho nhat trong 3 so\n",b);
					printf("\n");
				} else
				    printf("So %d nho nhat trong 3 so\n",c);
				    printf("\n");
				    break;
		
			case 5:
				printf("Moi ban nhap vao 3 so nguyen a,b,c: ");
				scanf("%d%d%d",&a,&b,&c);
				
				if(a>b && a>c){
					printf("So %d lon nhat trong 3 so\n",a);
					printf("\n");
				} else if (b>c){
					printf("So %d lon nhat trong 3 so\n",b);
					printf("\n");
				} else 
				    printf("So %d lon nhat trong 3 so\n",c);
				    printf("\n");
				    break;
			
			case 6:
				    printf("Chuong trinh ket thuc.Cam on ban!\n");
				    break;
				
			default:
				printf("----------Lua chon khong hop le.Vui long chon lai----------\n");
				printf("\n");
				
		}
		
		
	} while ( luachon != 6);



return 0;
}

