#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
   char str[MAX],c;
   printf("Nhap chuoi: ");
   fgets(str,MAX,stdin);
   str[strcspn(str,"\n")]= '\0';
   int len = strlen(str);
   
   printf("Chuoi ban vua nhap la: ");
   fputs(str,stdout);
   
   printf("\nNhap vao chu cai ban muon xoa: ");
   scanf("%c",&c);
   
   for ( int i =0 ;i<len;i++){
   	if(str[i] == c){
   		for ( int j =i;j<len;j++){
   			str[j]=str[j+1];
		   }
		   len--;
		   i--;
	   }
   }
   printf("Chuoi sau khi xoa chu cai %c la %s",c,str);


return 0;
}

