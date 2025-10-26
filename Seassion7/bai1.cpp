#include<stdio.h>
int main(){
	int n,i,a = 0,b = 0;
	printf("Moi ban nhap vao so nguyen: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
		a++;
		} else {
		b++;
		}		
	    
	}
	printf("Tu 1 den %d co %d so chan\n",n,a);
	printf("Tu 1 den %d co %d so le",n,b);


return 0;
}

