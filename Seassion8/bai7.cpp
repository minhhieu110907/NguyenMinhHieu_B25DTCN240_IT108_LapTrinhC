#include<stdio.h>
int main(){
	int sophantu,i=0;
	int a[i];
	printf("Moi ban nhap vao so phan tu cua mang: ");
	scanf("%d",&sophantu);
	
		for(int i =0;i<sophantu;i++){
	do{
		printf("Nhap vao phan tu thu %d:  ",i);
		scanf("%d", &a[i]);
		if( a[i] %2 ==0 ){
			printf("----------So duoc nhap khong phai so le.Vui long nhap lai---------- \n ");
		
	} 
    } while (a[i] %2 ==0);
} 

for(i=0;i<sophantu;i++)
printf("%d ",a[i]);


return 0;
}

