#include <stdio.h>

#define string(a, b) \
	printf(#a " " #b "\n")

int main(){
	string (abcd, efgh);
	return 0;
}


/*

/  -> Macro Continuation
#  -> Stringize
## -> Token Pasting

*/ 