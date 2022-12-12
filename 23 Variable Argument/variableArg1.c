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
	printf("Mean : %f\n", mean(2,3,4,5));
	return 0;
}