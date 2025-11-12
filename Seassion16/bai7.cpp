#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 1000
int main(){
   char str [MAX];
   int countNumber=0,countSpecial=0,countletter=0;
   printf("Nhap chuoi: ");
   fgets(str,MAX,stdin);
   str[strcspn(str,"\n")]= '\0';
   fputs(str,stdout);
   
   int count = strlen(str);
   printf("\nChuoi ban nhap co %d ky tu",count);
   
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i]))
            countNumber++;
        else if(isalpha(str[i]))
            countletter++;
        else if (ispunct(str[i]))
            countSpecial++;
    }
    printf("\nChuoi ban vua nhap co %d chu cai",countletter);
    printf("\nChuoi ban vua nhap co %d chu so",countNumber);
    printf("\nChuoi ban vua nhap co %d ki tu dac biet",countSpecial);

return 0;
}

