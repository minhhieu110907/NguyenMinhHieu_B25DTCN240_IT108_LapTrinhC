#include<stdio.h>
#define MAX 100
int main(){
	int choose1,n=0,flag1 =0,flag2=0,sum,pos4,numValue4,pos5,pos6,numValue6,numValue7,choose2,choose3,start,end,mid,change,temp1,max,min,maxIndex,temp2;
	int a[MAX];
	printf("----------Quan ly danh sach so nguyen----------\n");
	printf("1.Nhap so cac phan tu cho mang\n");
	printf("2.Hien thi mang\n");
	printf("3.Tinh tong cac phan tu trong mang\n");
	printf("4.Them phan tu vao vi tri bat ki\n");
	printf("5.Xoa phan tu vao vi tri bat ki\n");
	printf("6.Cap nhat vi tri bat ki\n");
	printf("7.Tim kiem phan tu (7.1 Linear Search 7.2 Binary Search)\n");
	printf("8.Sap xep mang (8.1 Tang dan Bubble Sort 8.2 Giam dan Selection Sort)\n");
	printf("9.Tinh hieu so lon nhat va nho nhat trong mang\n");
	printf("10.Thoat\n");
	
	do {
		printf(" Moi ban nhap vao lua chon: ");
		scanf("%d",&choose1);
		
		switch(choose1){
			case 1:
				printf("Moi ban nhap so phan tu cho mang: ");
				scanf("%d",&n);
				
				for ( int i =0;i<n;i++){
					printf("Nhap phan tu a[%d]: ",i);
					scanf("%d",&a[i]);
					flag1 =1;
				}
				break;
			case 2:
				if( flag1 == 1){
			    printf("Mang ban vua nhap la: ");
	            for ( int i =0;i<n;i++){
				printf("%d ",a[i]);
			}
			    } else {
			    	printf("Mang rong");
				}
				printf("\n");
				break;
			case 3:
				printf("Mang ban vua nhap la: ");
				for ( int i =0 ; i<n;i++){
					printf("%d ",a[i]);
				}
				sum =0;
				printf("Tong cac phan tu trong mang ban vua nhap la: ");
				for( int i =0;i<n;i++){
					sum += a[i];
				}
				printf("%d ",sum);
				break;
			case 4:
				if( n >= MAX){
					printf("Mang day.Khong the them");
					break;
				}
				do{
					printf("Nhap vi tri muon them: ");
					scanf("%d",&pos4);
					if(pos4 < 0 || pos4 > n){
						printf("Vi tri khong hop le");
					}
				} while ( pos4 < 0 || pos4 > n);
				
				printf("Nhap vao gia tri cap nhat: ");
				scanf("%d",&numValue4);
				for ( int i =n ;i > pos4;i--){
					a[i]=a[i - 1];
				}
				a[pos4]=numValue4;
				n++;
				printf("Da them phan tu %d vao vi tri index %d",numValue4,pos4);
				printf("\n");
				break;
			case 5:
				if(n==0){
					printf("Mang rong");
					break;
			    }
				do{
				  printf("Nhap vi tri xoa: ");
				  scanf("%d",&pos5);
				  if( pos5 < 0 || pos5 >= n){
				  	printf("Vi tri khong hop le");
				  }
				} while ( pos5 < 0 || pos5 >= n);
				for ( int i =pos5;i < n - 1;i++){
					a[i]=a[i+1];
				}
				n--;
				printf("Da xoa phan tu tai vi tri %d",pos5);
				printf("\n");
				break;
			case 6:
				if(n==0){
					printf("Mang rong.");
				}
				do{
				printf("Nhap vao vi tri muon cap nhat: ");
				scanf("%d",&pos6);
				if( pos6 < 0 || pos6 >= 0){
					printf("Vi tri khong hop le");
				}
			    } while ( pos6 < 0 || pos6 >= n);
			    	a[pos6]=numValue6;
				printf("Da cap nhat phan tu tai vi tri %d",pos6);
				printf("\n");
				break;
			case 7:{
				flag2 = 0;
				do{
				printf("Moi ban nhap vao gia tri ban muon tim kiem: ");
				scanf("%d",&numValue7);
				
				printf("Moi ban nhap vao gia tri muon tim kiem(1.Linear Search  2.Binary Search): ");
				scanf("%d",&choose2);
				if(choose2 ==1){
					for ( int i =0;i<n;i++){
						if(a[i]==numValue7){
							printf("So ban muon tim nam o vi tri %d",i);
							flag2=1;
						}
					}
					if( flag2 !=1){
						printf("Khong co so ban muon tim trong mang");
					}
					
				} else if (choose2 ==2){
					for ( int i =0;i<n-1;i++){
						change =0;
						for ( int j =0;j<n-i-1;j++){
							if(a[j]>a[j+1]){
								temp1=a[j];
								a[j]=a[j+1];
								a[j+1]=temp1;
								change =1;
							}
						}
					   if (change ==0){
					   	break;
					   } 
					}
					printf("Mang sau khi sap xep la: ");
					for ( int i =0;i<n;i++){
						printf("%d ",a[i]);
					}
					start = 0,end = n-1;
					while(start<=end){
						mid = (start+end)/2;
						if(a[mid] == numValue7){
							printf("So ban muon tim o vi tri %d",mid);
							flag2 =1;
							break;
						} else if (a [mid]>numValue7){
							end = mid -1;
						} else {
							start = mid +1;
						}
					}
					if(flag2!=1){
						printf("Khong co so ban muon tim trong mang");
					}
				} else {
					printf("----------Lua chon khong hop le.Vui long chon lai----------");
				}
			} while ( choose2 != 1 && choose2 != 2);
			printf("\n");
				break;
		   }
			case 8:
			do{
			    printf("\n1.Sap xep tang dan bang Bubble Sort");
			    printf("\n2.Sap xep giam dan bang Selecttion Sort");
			    printf("Moi ban nhap vao lua chon sap xep mang: ");
			    scanf("%d",&choose3);
			    if(choose3 == 1){
			    	for ( int i =0;i<n-1;i++){
						change =0;
						for ( int j =0;j<n-i-1;j++){
							if(a[j]>a[j+1]){
								temp2=a[j];
								a[j]=a[j+1];
								a[j+1]=temp2;
								change =1;
							}
						}
					   if (change ==0){
					   	break;
					   } 
					}
					printf("Mang sap xep theo thu tu tang dan la: ");
					for ( int i =0;i<n;i++){
						printf("%d ",a[i]);
					}
				} else if ( choose3 ==2){
					for ( int i = 0;i<n-1;i++){
						maxIndex = i;
						for( int j =i+1;j<n;j++){
							if ( a[j]> a[maxIndex]){
								maxIndex = j;
							}
						}
						temp2 = a[i];
						a[i]=a[maxIndex];
						a[maxIndex]=temp2;
					}
					printf("\nMang sau khi sap xep giam dan la: ");
					for ( int i = 0;i<n;i++){
						printf("%d ",a[i]);
					}
				} else {
					printf("----------Lua chon khong hop le.Vui long chon lai----------");
				}
			} while ( choose3 != 1 && choose3 !=2);
				printf("\n");
				break;
			case 9:
				max = a[0];
				min = a[0];
				for ( int i = 0; i<n;i++){
					if(a[i]>max){
						max = a[i];
			    	}
					if(a[i]<min){
						min = a[i];
					}
				}
				printf("Hieu cua so lon nhat va so nho nhat trong mang la: %d",max-min);
				printf("\n");
				break;
			case 10:{
				printf("Thoat chuong trinh.");
				break;
			}
				
		}		
	}while ( choose1 !=10);
	


return 0;
}

