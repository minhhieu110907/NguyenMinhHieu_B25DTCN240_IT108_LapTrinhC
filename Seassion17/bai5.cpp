#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 1000
int main(){
   char str1[MAX],str2[MAX];
   printf("Nhap chuoi 1: ");
   fgets(str1,MAX,stdin);
   str1[strcspn(str1,"\n")]= '\0';
   
   printf("Chuoi 1 ban vua nhap la: ");
   fputs(str1,stdout);
   for ( int i =0 ;i<strlen(str1);i++){
   	   str1[i]= toupper(str1[i]);
   }
   
   printf("\nNhap chuoi 2: ");
   fgets(str1,MAX,stdin);
   str2[strcspn(str2,"\n")]= '\0';
   
   printf("\nChuoi 2 ban vua nhap la: ");
   fputs(str2,stdout);
   for ( int i =0 ;i<strlen(str2);i++){
   	   str2[i]= toupper(str2[i]);
   }
     int result =strcmp(str1,str2);
   if (result ==0 ){
   	printf("\nGiong nhau");
   } else {
   	printf("\nKhac nhau");
   }
   
   
   


return 0;
}

