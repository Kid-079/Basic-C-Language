#include <stdio.h>

int main(){
	int a[4][3][6] = {
		{{2,13,22,34,41,50}, {1,10,23,33,46,52}, {11,29,31,43,58,61}},
		{{19,26,36,44,62,73}, {37,47,64,74,82,90}, {38,49,65,76,83,91}},
		{{39,66,77,84,91,100}, {67,78,86,92,101,121}, {69,87,93,102,123,135}},
		{{70,88,96,105,111,125}, {71,89,97,103,115,125}, {79,89,99,106,119,128}}
	};

	printf("Value : %d\n", a[3][0][4]);
	printf("Value : %d\n", a[1][1][3]);
	printf("Value : %d\n", a[2][1][0]);
	printf("Value : %d\n", a[0][2][2]);

	return 0;
}