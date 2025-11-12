#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(){
   char str [MAX];
   printf("Nhap chuoi: ");
   fgets(str,MAX,stdin);
   str[strcspn(str,"\n")] = '\0';
   
   printf("Chuoi ban vua nhap la: ");
   fputs(str,stdout);
   
   	 if (str[0]>= 'a' && str[0]<= 'z' ){
   	 	str[0]-=32;
		}
	for ( int i =0; i<strlen(str);i++){
		if(str[i]== ' ' && str [i+1] >= 'a' && str[i+1] <= 'z'){
			str[i+1]-=32;
	}
    }
	
	printf("\nChuoi sau khi chuyen la:%s ",str);


return 0;
}

