#include <stdio.h>
#include <time.h>

int main(){
	time_t cur_time;
	char *cu_cur;

	cur_time = time(NULL);
	cu_cur = ctime(&cur_time);
	
	printf("Cucur Time : %s\n", cu_cur);
	
	return 0;
}