#include <stdio.h>
#include <ctype.h>

char changeCase(char ch) {
	if (isalpha(ch)) {
		if (islower(ch)) {
			return toupper(ch);
		}
		else {
			return tolower(ch);
		}
	}
	else {
		return ch;
	}
}

int main() {
	char inputChar;
	scanf("%c", &inputChar);
	char outputChar = changeCase(inputChar);
	printf("%c\n", outputChar);  // Output: 'z'
	return 0;
}