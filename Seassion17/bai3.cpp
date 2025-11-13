#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
   char str1[MAX],str2[100];
   printf("Nhap chuoi 1: ");
   fgets(str1,MAX,stdin);
   str1[strcspn(str1,"\n")]= '\0';
   
   printf("Chuoi 1 ban vua nhap la: ");
   fputs(str1,stdout);
   
   printf("\nNhap chuoi 2: ");
   fgets(str2,100,stdin);
   str2[strcspn(str2,"\n")]= '\0';
   
   printf("Chuoi 2 ban vua nhap la: ");
   fputs(str2,stdout);
   
   strcat(str1,str2);
   printf("\nChuoi sau khi noi la: %s",str1);


return 0;
}

