#include <stdio.h>

int getAverage(int array[], int index);

int main(){
	int value[5] = {10,20,30,40,50};
	int average1;
	int average2;

	average1 = getAverage(value, 4); // pass pointer to the array as an argument
	average2 = getAverage(value, 2); // pass pointer to the array as an argument

	printf("Average : %d\n", average1);
	printf("Average : %d\n", average2);

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