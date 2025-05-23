#include <stdio.h>
#include <string.h>    // To use the "strcpy" function, the "string.h" library is needed.
                       // "strcpy" fonksiyonunu kullanabilmek için "string.h" kütüphanesine ihtiyaç vardır.

//The "struct" Structure and Use of Pointers in Functions
//"struct" Yapısı ve Fonksiyonlarda İşaretçilerin Kullanımı

typedef struct {
	char name[50];
	int age ;
	int salary;
	}employee;

void print_employee(const employee *e)
{
	printf("Name: %s\nAge: %d\nSalary: %d\n",e->name,e->age,e->salary);
}

int main(){
	employee e1;
	e1.age = 30;
	e1.salary = 20000;
	strcpy(e1.name,"Metehan");
	print_employee(&e1);

	employee e2 = {25,14000,"Mehmet"};
	print_employee(&e2);
	
	employee e2copy;
	e2copy = e2;
	print_employee(&e2copy);

	return 0;
}
