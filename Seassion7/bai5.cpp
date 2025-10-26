#include<stdio.h>
#include<math.h>
int main(){
	int n, tonglapphuong= 0,socuoi,i;
	printf("Moi ban nhap vao so nguyen: ");
	scanf("%d",&n);
	i=n;
	while(n > 0){
		socuoi= n %10;
		tonglapphuong= tonglapphuong + pow(socuoi, 3);
		n/=10;
	}
	if( tonglapphuong == i){
		printf("Day la so Amstrong");
		
	} else {
		printf("Day khong phai so Amstrong");
	}


return 0;
}

