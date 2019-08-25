/*
 ============================================================================
 Name        : Javatpoint.c
 Author      : Hunor Istvan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// This is a recursive funtion
int recFactorial(int n) {
	if (n == 1) return 1;
	else return n * recFactorial(n - 1);
}

// This is a tail recursive funtion
int recTailFactorial(int n, int accumulator) {
	if (n == 1) return accumulator;
	else return recTailFactorial(n -1, accumulator * n);
}

int main(void) {
	printf("Hello world test!\n");
	// This is a comment, it will be ignored at execution
	/*
	 * This will be a factorial example
	 */
	if (1) {
		printf("This is the true branch!\n");
	} else {
		printf("This is the false branch!\n");
	}
	int n = 5;
	int m = 5;
	int result = 1;
	while (n != 1) {
		result *= n;
		n -= 1;
	}
	printf("Result of %d! is %d.\n", m, result);
	printf("Result of %d! is %d.\n", m, recFactorial(m));
	printf("Result of %d! is %d.\n", m, recTailFactorial(m, 1));
	return EXIT_SUCCESS;
}
