#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 1000
int main(){
   int countNumber = 0,countLetter = 0,countUpper = 0,countSpecial = 0;
   char str [MAX];
   printf("Nhap mat khau: ");
   fgets(str,MAX,stdin);
   str[strcspn(str,"\n")]= '\0';
   int len = strlen(str);
   
   printf("Mat khau ban vua nhap la: ");
   fputs(str,stdout);
   
   	 
    for (int i = 0;str[i] != '\0'; i++) {
        if (isdigit(str[i]))
            countNumber++;
        if(isalpha(str[i]))
            countLetter++;
        if (isupper(str[i]))
            countUpper++;
        if (ispunct(str[i]))
            countSpecial++;
    }
    	if(len<8 || countNumber < 1 || countLetter < 1 || countUpper < 1 || countSpecial < 1){
    	printf("\nMat khau khong hop le");	
		} else {
		printf("\nMat khau hop le");
		}


return 0;
}

