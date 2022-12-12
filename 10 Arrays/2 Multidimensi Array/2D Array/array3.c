#include <stdio.h>

int main(){
	int value[4][3] = {
		{5,10,15},
		{20,25,30},
		{35,40,45},
		{50,55,60},
	};

	int i;
	int j;

	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++){
			printf("Index [%d][%d] = %d\n", i, j, value[i][j]);
		}
	}

	return 0;
}