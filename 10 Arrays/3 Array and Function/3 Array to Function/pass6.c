#include <stdio.h>

double getAverage(int array[], int index);

int main(){
	int value[5] = {1,2,3,4,5};
	double average1;

	average1 = getAverage(value, 5);

	printf("Value : %f\n", average1);
	printf("Value : %g\n", average1);

	return 0;
}

double getAverage(int value[], int index){
	int a;
	double average;
	double total;

	for (a = 0; a < index; a++){
		total += value[a];
		if (value[a] %2 == 1){
			break;
		}
	}

	average = total / index;

	return average;
}