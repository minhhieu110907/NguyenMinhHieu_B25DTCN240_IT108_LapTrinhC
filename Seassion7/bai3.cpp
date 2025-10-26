#include<stdio.h>
int main(){
	int i,n,sodaonguoc = 0,socuoi;
	printf("Moi ban nhap vao so nguyen: ");
	scanf("%d",&n);
	i=n;
	while(i>0){
		socuoi=i%10;
		sodaonguoc=(sodaonguoc*10)+socuoi;
		i/=10;
	}
	if(sodaonguoc == n){
		printf("Day la so doi xung");
		
	} else {
		printf("Day khong phai la so doi xung ");
	}
		
		

return 0;
}

