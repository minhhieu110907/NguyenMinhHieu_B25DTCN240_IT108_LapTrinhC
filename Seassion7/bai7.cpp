#include<stdio.h>
int kiemtrasonguyento (int n){
	switch (n){
	case 0:
	case 1:
		return 0;
	case 2:
		return 1;
	default:
		if(n%2==0){
			return 0;
		}		
	for(int i=3;i<=n/2;i+=2){
		if (n % i==0)	{
			return 0;
		} else {
			return 1;
		}
	}
    }  
}
int main (){
	int a,b,c;
	printf("Moi ban nhap vao 2 so nguyen: ");
	scanf("%d%d",&a,&b);
	if(a>b){
		c=a;
		a=b;
		b=c;	
	}
	printf("Cac so nguyen to trong khoang [%d,%d] la:\n ",a,b);
	    for(int i=a;i<=b;i++){
	    	if(kiemtrasonguyento(i))
	    	printf("%d\n",i);
		}
	


return 0;
}
 
