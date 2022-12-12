#include <stdio.h>

int lap(int a){
	if (a == 0){
		return 0;
	}

	if (a == 1){
		return 1;
	} 

	return lap(a - 1) + lap(a - 2);
}

int main(){
	int a;
	for (a = 0; a < 10; a++){
		while (a < 10){
			printf("Lap [%d] Checkpoint %d\n", a, lap(a));
			a++;
		}

	}
	return 0;
}
