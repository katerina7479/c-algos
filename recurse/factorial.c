#include <stdio.h>
#include <assert.h>
#include <time.h>

unsigned long long basic_factorial(int n);
unsigned long long tail_factorial(int n, unsigned long long a);


int main(int argc, char** argv){
	int a;
	unsigned long long ans_basic, ans_tail;
	clock_t start, end;
	double cpu_time_used;

    printf("Enter an integer value <= 20: ");
    scanf("%d", &a);
	assert(a <= 20);

	start = clock();
	ans_basic = basic_factorial(a);
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Basic factorial of %d is %llu, took: %f sec\n", a, ans_basic, cpu_time_used);
	
	start = clock();
	ans_tail = tail_factorial(a, 0);
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("tail_factorial of %d is %llu, took: %f sec\n", a, ans_basic, cpu_time_used);
}


unsigned long long basic_factorial(int n){
	// Compute factorial recursively
	if (n <= 0){
		return 0;
	} else if (n == 1){
		return 1;
	} else {
		return n * basic_factorial(n - 1);
	}
}


unsigned long long tail_factorial(int n, unsigned long long a){
	if (n <= 0){
		return 0;
	} else if (n == 1){
		return a;
	} else {
		return tail_factorial(n - 1, n * a);
	}
}
