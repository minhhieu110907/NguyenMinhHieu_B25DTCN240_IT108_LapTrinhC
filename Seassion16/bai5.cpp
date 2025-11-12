#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
   char str [MAX];
   int count= 1;
   printf("Nhap chuoi: ");
   fgets(str,MAX,stdin);
   
   str[strcspn(str,"\n")]= '\0';
   fputs(str,stdout);
   
   for ( int i =0;i<strlen(str);i++){
   	   if ( str[i]== '\n' ){
   	   	count++;
		  }
   }
   printf("\nChuoi ban nhap vao co %d tu",count+1);


return 0;
}

