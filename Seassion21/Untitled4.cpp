#include<stdio.h>
#include<string.h>
typedef struct {
	char name[50];
	int age;
	float grade;
} Student;
Student students[5];
void input (Student *students,int n ){
	for ( int i =0;i<n;i++){
		printf("Nhap ten: ");
		fgets(students[i].name,50,stdin);
		students[i].name[strcspn(students.name[i].name,"\n")] = '\0';
		
		printf("Nhap tuoi: ");
		scanf("%d",&students[i].age);
		getchar();
		
		printf("Nhap diem trung binh: ");
		scanf("%.2f",&students[i].grade);
		fflush(stdin);	
	}
}
void show_list ( Student a[],int n){
	printf("\n-----Thong tin sinh vien-----\n");
	for ( int i =0;i<n;i++){
		printf("Ten sinh vien: %s\n",a[i].name);
		printf("Tuoi: %d\n",a[i].age);
		printf("Diem trung binh: %f\n",a[i].grade);
		printf("--------------------------");
		
	}
}
void search ( Student a[],int n){
	char nameSearch [50];
	printf("Nhap ten muon tim kiem: ");
	fgets(nameSearch,50,stdin);
	nameSearch[strcspn(nameSearch,"\n")]='\0';
	
	for ( int i =0;i<n;i++){
		if( nameSearch == a[i].name ){
			printf("")
		}
	}
}
int main(){



return 0;
}

