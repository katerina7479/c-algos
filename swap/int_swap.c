#include <stdio.h>


void swap(int *x, int *y){
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}


int main(){

	int a = 3;
	int b = 7;

	printf("A is %d and B is %d\n.", a, b);
	printf("We swap() them.\n");
	swap(&a, &b);
	printf("Now A is %d and B is %d.\n", a, b);

	return 0;
}
