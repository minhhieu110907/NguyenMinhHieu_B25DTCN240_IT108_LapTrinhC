#include<stdio.h>
#include<string.h>
struct Student {
	    int id;
		char name [50];
		int age;
		char phoneNumber [15];
	};
int findStudentByID(struct Student student[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (student[i].id == id) {
            return i; 
        }
    }
    return -1;
}
void edit(struct Student student[],int n){
	char name1[50];
	int age2;
	printf("Nhap ten cap nhat: ");
    fgets(name1,50,stdin);
    name1[strcspn(name1,"\n")]='\0';
    
    printf("Nhap tuoi cap nhat: ");
    scanf("%d",&age2);
    getchar();
    
	strcpy(student[n].name,name1);
	student[n].age = age2;
	printf("Ten sinh vien sau khi cap nhat: %s\n",student[n].name);
	printf("Tuoi sinh vien sau khi cap nhat la: %d",student[n].age);
}
int main(){
	struct Student student[50];
	int n = 5,ID;
	char nameUpdate [50];
	int ageUpdate;
	for ( int i =0;i<n;i++){
		student[i].id=i+1;
		printf("student[%d]-Ho va ten: ",i);
		fgets(student[i].name,50,stdin);
		student[i].name[strcspn(student[i].name,"\n")]='\0';
		
		printf("student[%d]-Tuoi: ",i);
		scanf("%d",&student[i].age);
		fflush(stdin);
		
		printf("student[%d]-So dien thoai: ",i);
		fgets(student[i].phoneNumber,15,stdin);
		student[i].phoneNumber[strcspn(student[i].phoneNumber,"\n")]='\0';
	}
	printf("\n");
	printf("------Thong tin hoc sinh-----\n");
	for ( int i =0;i<n;i++){
		printf("student[%d]-Ho va ten:%s\n",i,student[i].name);
		printf("student[%d]-Tuoi:%d\n",i,student[i].age);
		printf("student[%d]-So dien thoai:%s\n",i,student[i].phoneNumber);
	}
    
    printf("Moi ban nhap vao id can tim: ");
    scanf("%d",&ID);
    int result = findStudentByID(student,n,ID);
    if ( result != -1){
    	printf("----------DA TIM THAY SINH VIEN----------\n");
        printf("ID: %d\n",student[result].id);
        printf("Ho ten: %s\n", student[result].name);
        printf("Tuoi: %d\n", student[result].age);
        printf("So dien thoai: %s\n", student[result].phoneNumber);
    
        edit(student,ID);
	} else {
        printf("ID ban tim khong ton tai");
	}
	

return 0;
}

