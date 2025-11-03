#include<stdio.h>
	int main (){
		
		int n;
		printf("Moi ban nhap vao so phan tu cua mang: ");
		scanf("%d",&n);
		
		int a[n];
		printf("------------Moi ban nhap phan tu vao mang----------- \n");
		
		for( int i = 0; i< n; i++){
			printf("Moi ban nhap vao phan tu a[%d]: ",i);
			scanf("%d",&a[i]);
		}
		printf("\n");
		printf("Mang cua ban la: ");
		for ( int i = 0; i < n; i++){
			printf("%d ",a[i]);
		}
		printf("\n");
		
		int x;
		printf("Moi ban nhap vao so nguyen muon tim kiem: ");
		scanf("%d",&x);
		printf("\n");
		
		
		int count=0;
		int value[n];
		for( int i =0; i<n;i++){
		if ( a[i] == x){
			value[count]=a[i];
			count++;	
		    }
	    }
	    if( count == 0){
	    	printf("Khong tim thay phan tu %d trong mang\n",x);
	    	
		} else if( count>0) {
			printf("Tim thay %d phan tu %d trong mang\n",count,x);
			
		printf("--------Mang chua cac phan tu trung voi so ban nhap------\n");
		for ( int i =0 ; i< count;i++){
			printf("%d ",value[i]);
		}
	}
		
	
	    
		
return 0;
}

