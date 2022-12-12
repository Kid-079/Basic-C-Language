#include <stdio.h>

int value(int a){
	if (a <= 1){
		return 1;
	}
	return a * value(a - 2);
}

int main(){
	int a = 6;
	printf("Value : %d -> %d\n", a, value(a));

	return 0;
}


/*

       |  6 <= 1 ===> 6
6 - 2  |  4 <= 1 ===> 4
4 - 2  |  2 <= 1 ===> 2  
-------------------------
      6! -> 6.4.2 -> 48

*/