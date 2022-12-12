#include <stdio.h>

int main(){
	int a = 8;
	int b = 20;

	switch (a){
		case 10 :
			printf("A\n");
		switch (b){
			case 20 :
				printf("B\n");
		}
	}

	printf("Value A : %d\n", a);
	printf("Value B : %d\n", b);

	return 0;
}