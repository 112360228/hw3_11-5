#include <stdio.h>

// Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

// Function to calculate the least common multiple (LCM) of two integers
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	int num1, num2;

	printf("Enter the first integer: ");
	scanf("%d", &num1);

	printf("Enter the second integer: ");
	scanf("%d", &num2);

	int result = lcm(num1, num2);
	printf("LCM of %d and %d is %d\n", num1, num2, result);

	return 0;
}