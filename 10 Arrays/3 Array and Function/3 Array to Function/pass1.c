#include <stdio.h>

int getAverage(int array[], int index);

int main(){
	int value[5] = {10,20,30,40,50};
	int average;

	average = getAverage(value, 5); // pass pointer to the array as an argument

	printf("Average : %d\n", average);

	return 0;
}

int getAverage(int array[], int index){
	int a;
	int average;
	int total;

	for (a = 0; a < index; a++){
		total += array[a];
	}

	average = total / index;

	return average;
}