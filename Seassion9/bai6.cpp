#include<stdio.h>
int main(){
	int sum = 0;
	int a[5]={10,12,13,14,15};
	printf("Mang co gia tri la: ");
	for (int i = 0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(int i =0;i<5;i++){
		sum+=i;
	}
    float	avr = sum /5;
    printf("Gia tri trung binh trong mang la: %.2f",avr);
	
	
	


return 0;
}

