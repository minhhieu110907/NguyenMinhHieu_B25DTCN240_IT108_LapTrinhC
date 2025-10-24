#include<stdio.h>
int main(){
	float a,b;
	int luachon;
	do {
	
	printf("Moi ban nhap vao so a: ");
	scanf("%f",&a);
	
	printf("Moi ban nhap vao so b: ");
	scanf("%f",&b);
	
	printf("Moi ban nhap vao 1 lua chon (1.Cong 2.Tru 3.Nhan 4.Chia 5.Thoat): ");
	scanf("%d",&luachon);
	
	
	switch(luachon){
		case 1:
		 printf("%.4f + %.4f = %.2f\n",a,b,a+b);
		 break;
		case 2:
		 printf("%.4f - %.4f = %.2f\n",a,b,a-b);
		 break;
		case 3:
		 printf("%.4f * %.4f = %.2f\n",a,b,a*b);
		 break;
		case 4:
		  if (b == 0)
		   printf("Khong the chia cho 0");
		  else
		   printf("%.4f : %.4f = %.2f\n",a,b,a/b);
		   break;
		case 5:
		 printf("Chuong trinh ket thuc. Cam on ban!");
		 break;
		  
		default:
			printf("----------Lua chon cua ban khong hop le! Vui long chon lai----------\n ");
		
		
	} 
	
    }	while (luachon != 5);
	
	
	
return 0;
}

