#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
   char str [MAX],character;
   printf("Nhap chuoi: ");
   fgets(str,MAX,stdin);
   str[strcspn(str,"\n")]= '\0';
   
   printf("Chuoi ban vua nhap la: ");
   fputs(str,stdout);
   
   printf("\nMoi ban nhap ki tu muon xoa: ");
   scanf(" %c",&character);
   int len = strlen(str);
   for ( int i =0;i<len;i++){
   	if (str[i] == character){
   	 	for ( int j =i;j<len;j++){
   	 	    str[j]=str[j+1];
   	 	    }
   	 		len--;
   	 		i--;
		}
   }
   printf("Chuoi sau khi xoa ki tu la: %s ",str);
   


return 0;
}

