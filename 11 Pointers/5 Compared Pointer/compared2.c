#include <stdio.h>

int main(){
	int *pA;
	int *pB;
	pA = (int *)10;
	pB = (int *)20;

	if(pA < pB){
		printf("A less than B\n");
	} else {
		printf("A Greater than B\n");
	}

	return 0;
}