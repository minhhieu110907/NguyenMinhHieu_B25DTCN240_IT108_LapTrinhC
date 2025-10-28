#include<stdio.h>
int main(){
	int a[3]={10,11,14};
	printf("Cac phan tu cua mang truoc khi thay doi la: ");
	for(int i=0;i<3;i++){
	  printf("%d ",a[i]);
   }
    printf("\n");
    printf("Cac phan tu cua mang sau khi thay doi la: ");
	for (int i = 0; i<3;i++){
		if (a [i]%2==0){
		 a[i]+=3;
			
		} else { 
		 a[i]+=2;
		}
	    printf("%d ",a[i]);
   }
	

return 0;
}

