#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first value
 * @b: second value
 *
 * Return: nothing
 */

void swap_int(int *a, int *b);

int main(void)
{
	int m = 25;
	int n = 100;

	printf("m is %d, n is %d\n", m, n);
	swap(&m, &n);
	printf("m is %d, n is %d\n", m, n);
	return (0);
}

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
