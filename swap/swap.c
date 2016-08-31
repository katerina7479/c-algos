#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int swap(void *x, void *y, int size){
	void *tmp;
	if ((tmp = malloc(size)) == NULL)
		return 1;
	memcpy(tmp, x, size);
	memcpy(x, y, size);
	memcpy(y, tmp, size);
	free(tmp);
	return 0;
}


int main(){

	int a = 3;
	int b = 7;

	printf("A is %d and B is %d.\n", a, b);
	printf("We swap() them.\n");
	swap(&a, &b, sizeof(a));
	printf("Now A is %d and B is %d.\n\n", a, b);

	char x = 'x';
	char y = 'y';

	printf("Same swap function.\n");
	printf("x is %c and y is %c.\n", x, y);
	printf("We swap() them.\n");
	swap(&x, &y, sizeof(x));
	printf("Now x is %c and y is %c.\n\n", x, y);


	return 0;
}
