#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 1000
int main(){
	char str[MAX];
	int flag =0,choose;
   do {
   	printf("\n---------------MENU---------------");
   	printf("\n1.Nhap chuoi");
   	printf("\n2.Chuyen thanh chu hoa");
   	printf("\n3.Chuyen thanh chu thuong");
   	printf("\n4.Thoat");
   	
   	printf("\nNhap lua chon cua ban: ");
   	scanf("%d",&choose);
   	getchar();
   	
   	switch ( choose){
   		case 1: {
   			flag = 0;
   			printf("Nhap chuoi: ");
            fgets(str,MAX,stdin);
            str[strcspn(str,"\n")]= '\0';
            flag = 1;
   
            printf("Chuoi ban vua nhap la: ");
            fputs(str,stdout);
            break;
        }
        case 2: {
        	if(flag != 1){
        		printf("Vui long nhap chuoi o chuc nang 1.");
        		break;
			}
			else {
				for ( int i = 0;i<strlen(str);i++){
					str[i]= toupper(str[i]);
				}
				printf("Chuoi sau khi in hoa toan bo la: %s",str);
			}
			break;
		}
		case 3: {
				if(flag != 1){
        		printf("Vui long nhap chuoi o chuc nang 1.");
        		break;
			}
			else {
				for ( int i =0;i<strlen(str);i++){
					str[i]=tolower(str[i]);
				}
				printf("Chuoi sau khi in thuong toan bo la: %s",str);
			
			break;
		}      
	   }
	   case 4:
	   	    printf("Thoat");
	   	
	   	default:
	   		printf("Khong hop le");
    }
    } while (choose != 4);
   
   


return 0;
}

