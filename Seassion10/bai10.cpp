#include<stdio.h>
void bubbleSort ( int a[], int n){
	int change,tempvar;
	if(n<2){
		printf("Mang qua ngan de sap xep");
		return;
	}
	for ( int i = 0; i<n;i++){
		change =0;
		for ( int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				tempvar=a[j];
				a[j]=a[j+1];
				a[j+1]=tempvar;
				change++;
			}
		}
		if(change==0){
			break;
		}
	}
}
int main(){
	int choose,start=0,mid,x,pos1,pos2,pos3,numValue1,numValue3,found=0;
	int a[100]={1,5,23,49,10};
	int n = 5;
	int end = n-1;
	do {
		printf("----------Quan ly danh sach so nguyen----------\n");
		printf("1.Them phan tu vao vi tri bat ki\n");
		printf("2.Xoa phan tu o vi tri bat ki\n");
		printf("3.Cap nhat phan tu o vi tri bat ki\n");
		printf("4.Tim kiem phan tu trong mang\n");
		printf("5.Hien thi phan tu trong mang\n");
		printf("6.Sap xep phan tu trong mang (Bubble Sort)\n"); 
		printf("7.Thoat\n");
		
		printf("Moi ban nhap vao lua chon: ");
		scanf("%d",&choose);
		
		switch( choose){
			case 1:
				printf("Mang ban dau la: ");
				for ( int i = 0; i< n;i++){
				    printf("%3d",a[i]);
				}
				printf("\n");
				if ( n ==100){
					printf("Mang day.Khong the them");
					break;
				}
				do {
					printf("Moi ban nhap vao vi tri muon them: ");
					scanf("%d",&pos1);
					if(pos1<0 || pos1 > n){
						printf("Vi tri khong hop le.Vui long nhap lai\n");
					}
				} while (pos1<0 || pos1 > n );
				
				printf("Moi nhap vao gia tri ban muon them: ");
				scanf("%d",&numValue1);
				
				for ( int i = n;i> pos1;i--){
					a[i]=a[i-1];
				}
				a[pos1]=numValue1;
				n++;
				
				printf("Da them %d vao vi tri %d\n", numValue1, pos1);
                printf("Mang sau khi chen: ");
                for (int i = 0; i < n; i++)
				   printf("%d ", a[i]);
                printf("\n");
                break;
			case 2:
				printf("Mang ban dau la: ");
				for ( int i = 0; i< n;i++){
					printf("%3d",a[i]);
				}
				printf("\n");
				
				if(n==0){
					printf("Khong co gi de xoa");
					break;
				}
				do{
				printf("Moi ban nhap vao vi tri muon xoa: ");
				scanf("%d",&pos2);
			    } while( pos2 <0 || pos2 >= n );
			    
			    printf("\n");
			    
			    for ( int i = pos2 ; i< n-1;i++){
			    	a[i]=a[i+1];
				}
				n--;
				printf("Da xoa phan tu tai vi tri index %d",pos2);
				printf("Mang cap nhat la: ");
				for (int i = 0; i < n; i++)
				   printf("%d ", a[i]);
                printf("\n");
				
				break;
			case 3:
				printf("Mang ban dau la: ");
				for ( int i = 0; i< n;i++){
					printf("%3d",a[i]);
				}
				if ( n ==0){
					printf("Mang rong.Khong co gi de cap nhat");
					break;
				}
				do {
					printf("Moi ban nhap vao vi tri muon cap nhat: ");
					scanf("%d",&pos3);
					if(pos3<0 || pos3 >= n){
						printf("Vi tri khong hop le\n");
						printf("Vui long nhap lai\n");
					}
				} while ( pos3 < 0 || pos3>= n);
				
				printf("Moi ban nhap vao gia tri muon cap nhat: ");
				scanf("%d",&numValue3);
				a[pos3]=numValue3;
				printf("Da cap nhat phan tu %d vao vi tri index %d trong mang",a[pos3],pos3);
				printf("\n");
				break;
			case 4:
				printf("Mang ban dau la: ");
				for ( int i = 0; i< n;i++){
					printf("%3d",a[i]);
				printf("\n");
				}
				printf("Mang sau khi sap xep la: ");
				bubbleSort(a,n);
				for ( int i = 0; i< n;i++){
					printf("%3d",a[i]);
				}
				printf("\n");
				
				printf("Moi ban nhap vao so can tim: ");
			    scanf("%d",&x);
			    
			     start = 0;
                 end = n - 1;
                 found = 0;
						
				while(start<=end){
					mid = (start+end)/2;
					if(a[mid]==x){
						printf("So can tim nam o vi tri index %d trong mang",mid);
						found +=1;
						break;
					}else if( a[mid]> x){
						end = mid -1;
					} else {
						start = mid +1;
					}
				}
				if( found == 0){
					printf("Khong co gia tri nao trong mang.");
				}
				printf("\n");
				break;
			case 5:
				printf("Mang ban dau la: ");
				for ( int i = 0; i< n;i++){
					printf("%3d",a[i]);
				}
				break;
			case 6:
				printf("Mang ban dau la: ");
				for ( int i = 0; i< n;i++){
					printf("%3d",a[i]);
				}
				printf("\n");
				printf("Mang sau khi sap xep la: ");
				bubbleSort(a,n);
				for ( int i = 0; i< n;i++){
					printf("%3d",a[i]);
				}
				printf("\n");
				break;
			case 7:
				printf("Chuong trinh ket thuc.Cam on ban");
				break;
			default:
				printf("Lua chon khong hop le.Vui long chon lai.");
		}
		
	} while( choose !=7);


return 0;
}

