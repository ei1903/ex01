#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	printf("Rolling dice...\n");
	int a = rand() % 6 + 1;
	int b = rand() % 6 + 1;
	printf("Die 1: %d\n", a);
	printf("Die 2: %d\n", b);
	printf("Total value: %d\n", a + b);
}
