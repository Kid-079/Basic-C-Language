#include <stdio.h>

#define charc(a) printf("Address" #a " = %c\n", charc##a);
#define integer(b) printf("Address" #b " = %d\n", integer##b);

int main(){
	char charc50 = 'A';
	char charc60 = 'B';
	char charc70 = 'C';
	int integer80 = 10;

	charc(50);
	charc(60);
	charc(70);
	integer(80);

	return 0;
}