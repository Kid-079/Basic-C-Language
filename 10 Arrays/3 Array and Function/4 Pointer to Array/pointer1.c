#include <stdio.h>

int main(){
	int value[5] = {10,20,30,40,50};
	int *p;
	int i;

	p = &value[2];

	printf("%p\n", &value[2]);
	printf("%d\n", *(int *)p);

	return 0;
}


/*
int *a  --> int [5];                  --> Array Declaration Specifying Size
int* a  --> int [];                   --> Array Declaration Initializing Element 
int * a --> int [5] = {1,2,3,4,5};    --> Array Single Dimensi (Declaration and 
                                          Initializing Element)
int*a   --> int [2][4] = {{1,2,3,4,}, --> Array Multidimensi
                          {5,6,7,8}}; 
*/ 