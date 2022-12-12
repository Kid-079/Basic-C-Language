#include <stdio.h>

#if !defined (MESSAGE)
	#define MESSAGE "I Have a Message"
#endif

int main(){
	printf("You Have a Message ?\n");
	printf("%s\n", MESSAGE);

	return 0;
}