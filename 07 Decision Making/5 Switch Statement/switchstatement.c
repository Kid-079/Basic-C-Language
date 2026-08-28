#include <stdio.h>

int main(){
	char grade = 'G';

	switch(grade) {
	case 'A' :
		printf("Wonderfull\n");
		break;
	case 'B' :
		printf("Very Good\n");
		break;
	case 'C' :
		printf("Good\n");
		break;
	case 'D' :
		printf("Not Bad\n");
		break;
	case 'E' :
		printf("Bad\n");
		break;
	case 'F' :
		printf("Really Bad\n");
		break;
	default :
		printf("Invalid Grade\n");
	}

	printf("Grade : %c\n",grade);
	return 0;
}
