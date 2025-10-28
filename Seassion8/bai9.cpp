#include<stdio.h>
#include<math.h>
int kiemtrasonguyento(int n){
	switch (n){
		case 0:
	    case 1:
	      return 0;
	    case 2:
	      return 1;
	    default:
	    	if(n %2 ==0){
	    		return 0;
	        }
	        for(int i=3;i<sqrt(n);i+=2){
	        	if (n%i==0){
	        		return 0;
				} else {
					return 1;
				}
			}	
	}
}
int main(){
	int i=0; 
	int a[i],num;
	printf("Moi ban nhap vao so phan tu cua mang: ");
	scanf("%d",&num);
	
	for(int i =0;i<num;i++){
		printf("Moi ban nhap vao phan tu %d cua mang: ",i);
		scanf("%d",&a[i]);
	}
	printf("So nguyen to trong mang la: ");
	for(int i =0; i<num;i++){
		if ( kiemtrasonguyento(i)){
			printf("%d ",i);
		}
	}


return 0;
}

