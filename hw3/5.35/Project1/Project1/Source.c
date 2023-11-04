#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
	if (n <= 1) {
		return n;
	}

	unsigned long long int prev = 0;
	unsigned long long int current = 1;
	unsigned long long int next;

	for (unsigned int i = 2; i <= n; i++) {
		next = prev + current;
		prev = current;
		current = next;
	}

	return current;
}

int main() {
	unsigned int n;

	printf("Enter the value of n: ");
	scanf("%u", &n);

	unsigned long long int result = fibonacci(n);
	printf("Fibonacci(%u) = %llu\n", n, result);

	return 0;
}
