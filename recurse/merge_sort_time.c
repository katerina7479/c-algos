#include <stdio.h>
#include <assert.h>
#include <time.h>

unsigned long merge_sort_time(unsigned int n);

int main(int argc, char** argv){
	unsigned int a;
	unsigned long ans;
	clock_t start, end;
	double cpu_time_used;

    printf("Enter a list length: ");
    scanf("%u", &a);
	//assert(a <= 20);

	start = clock();
	ans = merge_sort_time(a);
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Merge sort time of %u is %lu, took: %f sec\n", a, ans, cpu_time_used);

}


unsigned long merge_sort_time(unsigned int n){
	// Compute factorial recursively
	if (n <= 1){
		return 1;
	} else {
		return 2 * merge_sort_time(n / 2) + n;
	}
}
