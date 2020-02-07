#include <stdio.h>
#include "array.h"

int main()
{
	int A[6] = { 1, 2, 3, 4, 5, 6 };

	get_sum_of_array(A, 6);
	print_array(A, 6);

	return 0;
}