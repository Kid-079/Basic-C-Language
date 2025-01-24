#include <stdio.h>

int main(){
	int a = 4;

	if (a == 0){
		printf("Unprogress, System Failure\n");
	} else if (a == 1) {
		printf("Check 1\n");
	} else if (a == 2) {
		printf("Check 2\n");
	} else if (a == 3){
		printf("Check 3\n");
	} else {
		printf("Try Again.. Follow The Instructions.. \n");
		printf("Check 1.. Check 1.. 2.. Check 1.. 2.. 3... \n");
	}
	
	return 0;
}
