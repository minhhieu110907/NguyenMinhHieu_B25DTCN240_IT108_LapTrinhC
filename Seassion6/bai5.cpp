#include<stdio.h>
int main (){
	int i,n;
	printf("Bang cuu chuong\n");
	for(n=1;n<10;n++){
		printf("Bang cuu chuong %d\n",n);
	    for(i=1;i<=10;i++){
		 printf("%d * %d = %d\n",n,i,n*i);
	    }
		printf("\n");
    }
	

	
	return 0;
}
