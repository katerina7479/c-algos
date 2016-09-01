#include <stdio.h>


float harmonic(int n);
float tail_harmonic(int n, float a);

int main(int argc, char** argv){
	int n;
	float ans;

    printf("Enter a number n: ");
    scanf("%u", &n);

	ans = harmonic(n);
	printf("Harmonic series of %i is %f\n", n, ans);
	ans = tail_harmonic(n, 0);
	printf("Tail Harmonic series of %i is %f\n", n, ans);

}


float harmonic(int n){
	// Compute factorial recursively
	if (n <= 1){
		return 1;
	} else {
		return harmonic(n - 1) + (1 / (float)n);
	}
}

float tail_harmonic(int n, float a){
	// Compute factorial recursively
	if (n <= 1){
		return a + 1;
	} else {
		return tail_harmonic(n - 1, a + (1 / (float)n));
	}
}
