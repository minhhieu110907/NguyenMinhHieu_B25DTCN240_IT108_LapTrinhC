#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
   char str [MAX];
   int count = 0;
   printf("Nhap chuoi: ");
   fgets(str,MAX,stdin);
   str[strcspn(str,"\n")]= '\0';
   fputs(str,stdout);
   
   count = strlen(str);
   printf("\nChuoi ban nhap co %d ky tu",count);
   


return 0;
}

