#include<stdio.h>
#include<string.h>
int main(){
	typedef struct {
	char name [50];
	int age;
	char phoneNumber[12];
	} Student;
	
	Student student1 = { "Nguyen Minh Hieu", 18 , "0961647315" };
	Student student2 = { "Nguyen Minh Hoang", 18 , "0123456789" };
	
	fputs(student1.name,stdout);
	printf("\nTuoi hoc sinh thu nhat: %d",student1.age);
	printf("\nSo dien thoai hoc sinh thu nhat: %s",student1.phoneNumber);



return 0;
}

