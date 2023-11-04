#include <stdio.h>

// Recursive function to calculate the power of a base raised to an exponent
int power(int base, int exponent) {
	// Base case: If exponent is 0, return 1
	if (exponent == 0) {
		return 1;
	}
	else {
		// Recursive case: Calculate power using recursion
		return base * power(base, exponent - 1);
	}
}

int main() {
	int base, exponent;

	printf("Enter the base: ");
	scanf("%d", &base);

	printf("Enter the exponent: ");
	scanf("%d", &exponent);

	int result = power(base, exponent);
	printf("%d^%d = %d\n", base, exponent, result);

	return 0;
}