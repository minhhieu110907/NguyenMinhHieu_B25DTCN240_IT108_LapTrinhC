#include<stdio.h>
int main(){
	int n,i=0,a,b;
	do{
	printf("Moi ban nhap vao so nguyen (>=0): ");
	scanf("%d",&n);
	if(n<0){
		printf("Xin loi.Ban da nhap sai dinh dang.\n ");
	}
	
   	} while(n<0);
   	
   	for(a=0;a<= n/2;a++){
   		for(b=0;b<=n/2;b++) {
   		   if (a*a*a + b*b*b ==n) {
   		   		printf("Cap so (a,b) thoa man dieu kien de bai la: (%d,%d)\n",a,b);
   		   	i+=1;
   		   }
	    }
   }
   if(i==0){
   	printf("Khong co cap so nao thoa man dieu kien de bai");
   } 
   
return 0;
}

