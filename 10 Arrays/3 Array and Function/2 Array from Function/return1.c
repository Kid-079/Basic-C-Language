#include <stdio.h>

int showValue(int size1, int size2);

int main(){
	int sizeArray[] = {10,20,30,40};

	showValue(sizeArray[2],sizeArray[3]);

	return 0;
}

int showValue(int size1, int size2){
	printf("Value Size 1 : %d\n", size1);
	printf("Value Size 2 : %d\n", size2);
}

