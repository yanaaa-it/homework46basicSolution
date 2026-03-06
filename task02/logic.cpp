#include"logic.h"
bool is_perfect_number(int number) {
	int num = number / 2;
	int sum = 1;

	for (int divider = 2; divider <= num; divider++)
	{
		if (number % divider == 0) {
			sum += divider;
		}

	}
	return   num==sum;
}