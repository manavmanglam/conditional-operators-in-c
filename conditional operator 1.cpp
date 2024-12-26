#include <stdio.h>
int main() {
	int a = 10;
	int b = 15;
	int max;
	max = (a > b) ? a : b;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("The maximum value is: %d\n", max);
	return 0;
}
