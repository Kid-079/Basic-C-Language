#include <stdio.h>
#include <stdarg.h>

double mean(int value,...){

	va_list listNumber;
	double total;
	int a;

	va_start(listNumber, value);
	
	for (a = 0; a < value; a++){
		total += va_arg(listNumber, int);
	}

	va_end(listNumber);

	return total/value;
}

int main(){

	int lap;
	int n1;

	lap = 10 * mean(1,2,3,4,5);

	for (n1 = 0; n1 < lap; n1++){
		printf("Value : %d\n", n1);
		if (n1 == 5){
			printf("CHECKPOINT\n");
			break;
		} 
	}

	return 0;
}