#include <stdio.h>
#include <string.h>

struct structMenu{
	char name[10];
	char topping[10];
	int menu_id;
};

void showMenu(struct structMenu *menu);

int main(){
	struct structMenu Menu1;
	struct structMenu Menu2;

	strcpy(Menu1.name, "Puding");
	strcpy(Menu1.topping, "Chocolate");
	Menu1.menu_id = 123456;

	strcpy(Menu2.name, "Brownies");
	strcpy(Menu2.topping, "Cherry");
	Menu2.menu_id = 23456;

	showMenu(&Menu1);
	printf("\n");
	showMenu(&Menu2);

	return 0;
}

void showMenu(struct structMenu *menu){
	printf("Name    : %s\n", menu->name);
	printf("Topping : %s\n", menu->topping);
	printf("Menu id : %d\n", menu->menu_id);
}