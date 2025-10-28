#include<stdio.h>
int main(){
	int b =0,c=0;
	int a[b][c];
		printf("Moi ban nhap vao so hang va so cot: ");
		scanf("%d %d",&b,&c);
		
		for (int i =0; i< b && i <c;i++){
		printf("Moi ban nhap vao hang %d va cot %d: ",i,i);
		scanf("%d %d",&a[i][i]);
	    }
	    
		
		
	


return 0;
}

