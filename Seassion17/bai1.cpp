#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
   char str1[MAX],str2[MAX];
   int j;
   printf("Nhap chuoi: ");
   fgets(str1,MAX,stdin);
   str1[strcspn(str1,"\n")]= '\0';
   int len = strlen(str1);
   
   printf("Chuoi ban vua nhap la: ");
   fputs(str1,stdout);
   
   printf("\n");
   printf("Chuoi dao nguoc la: ");
   for ( int i= len -1;i>=0;i--){
   	 printf("%c ",str1[i]);
   	 str2[j++] = str1[i];
   }
   int result =strcmp(str1,str2);
   if (result ==0 ){
   	printf("\nDay la Palindrome");
   } else {
   	printf("\nDay khong phai Palindrome");
   }


return 0;
}

