#include<stdio.h>

int main(){
	struct Address {
	char street[100];
	char city[50];
	int zip;
};
struct Person {
	char name[50];
	int age;
	struct Address address;
};
	struct Person person1 ={"Nguyen Minh Hieu", 18, { "Dai Mo", "Ha Noi", 100000}
	};
	printf("Ten cua sinh vien la: %s\n",person1.name);
	printf("Tuoi cua sinh vien la: %d\n",person1.age);
	printf("Duong: %s\n",person1.address.street);
	printf("Thanh pho: %s\n",person1.address.city);
	printf("Ma zip: %d\n",person1.address.zip);



return 0;
}

