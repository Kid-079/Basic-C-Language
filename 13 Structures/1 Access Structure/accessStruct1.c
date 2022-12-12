#include <stdio.h>
#include <string.h>

struct Menu
{
	char name[10];
	char topping[10];
	int menu_id;
};

int main(){
	struct Menu Menu1;
	struct Menu Menu2;

	strcpy(Menu1.name, "Puding");
	strcpy(Menu1.topping, "Chocolate");
	Menu1.menu_id = 12345;

	strcpy(Menu2.name, "Brownies");
	strcpy(Menu2.topping, "Cherry");
	Menu2.menu_id = 23456;

	printf("Name     : %s\n", Menu1.name);
	printf("Topping  : %s\n", Menu1.topping);
	printf("Menu_id  : %d\n", Menu1.menu_id);
	printf("\n");
	printf("Name     : %s\n", Menu2.name);
	printf("Topping  : %s\n", Menu2.topping);
	printf("Menu_id  : %d\n", Menu2.menu_id);
	return 0;
}