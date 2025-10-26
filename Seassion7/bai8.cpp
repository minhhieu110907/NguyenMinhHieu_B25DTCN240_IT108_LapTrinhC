#include<stdio.h>
int main(){
	int n,x,i,biendem=0,socuoi;
	printf("Nhap vao so n: ");
	scanf("%d",&n);
	
	printf("Moi ban nhap vao mot chu so: ");
	scanf("%d",&x);

	i=n;
	while(i>0){
		socuoi=i%10;
		if(socuoi==x){
			biendem+=1;
		}
		i/=10;
	}
	printf("Chu so %d xuat hien trong %d: %d lan ",x,n,biendem);
	


return 0;
}

