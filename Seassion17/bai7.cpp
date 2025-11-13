#include <stdio.h>
#include <string.h>

int main() {
    char mainString[500]; 
    char substring[100];  
    
    int mainLength; 
    int subLength;  
    
    int i, j; 
    
    int flag = 0; 

    printf("Nhap chuoi chinh : ");
    fgets(mainString, sizeof(mainString), stdin);
    mainString[strcspn(mainString, "\n")] = '\0';

    printf("Nhap chuoi con : ");
    fgets(substring, sizeof(substring), stdin);
    substring[strcspn(substring, "\n")] = '\0';

    mainLength = strlen(mainString);
    subLength = strlen(substring);

    if (subLength == 0) {
        flag = 1; 
    } 
    else {
        for (i = 0; i <= mainLength - subLength; i++) {
            
            for (j = 0; j < subLength; j++) {
                if (mainString[i + j] != substring[j]) {
                    break; 
                }
            }

            if (j == subLength) {
                flag = 1; 
                break; 
            }
        }
    }

    if (flag == 1) { 
        printf("\n'%s' CO LA chuoi con cua '%s'\n", substring, mainString);
    } else { 
        printf("'%s' KHONG LA chuoi con cua '%s'.\n", substring, mainString);
    }

    return 0;
}
