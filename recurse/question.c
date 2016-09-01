#include <stdio.h>


float harmonic(int n);

int main(int argc, char** argv){
	int a;
	float ans;

    printf("Enter a number n: ");
    scanf("%u", &a);

	ans = harmonic(a);
	printf("Harmonic series of %i is %f\n", a, ans);

}


float harmonic(int n){
	// Compute factorial recursively
	if (n <= 1){
		return 1;
	} else {
		return harmonic(n - 1) + (1 / (float)n);
	}
}
