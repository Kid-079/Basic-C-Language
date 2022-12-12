#include <stdio.h>
#include <string.h>

typedef struct A
{
	char name[10];
	char topping[10];
	int id;
}Breakfast;

typedef struct B
{
	char name[10];
	char topping[10];
	int id;
}Lunch;

int main(){
	Breakfast menu1;
	Lunch menu2;

	strcpy(menu1.name, "Puding");
	strcpy(menu1.topping, "Chocolate");
	menu1.id = 12345;

	strcpy(menu2.name, "Spaghetti");
	strcpy(menu2.topping, "Macaroni");
	menu2.id = 56789;

	printf("Name    : %s\n", menu1.name);
	printf("Topping : %s\n", menu1.topping);
	printf("id      : %d\n", menu1.id);
	printf("\n");
	printf("Name    : %s\n", menu2.name);
	printf("Topping : %s\n", menu2.topping);
	printf("id      : %d\n", menu2.id);

	return 0;
}