#include <stdio.h>

int main(){
	char grade = 'E';

	switch(grade) {
	case 'A' :
		printf("Very Good\n");
		break;
	case 'B' :
		printf("Good\n");
		break;
	case 'C' :
		printf("Not Bad\n");
		break;
	case 'D' :
		printf("Bad\n");
		break;
	default :
		printf("Invalid Grade\n");
	}

	printf("Grade : %c\n",grade);
	return 0;
}