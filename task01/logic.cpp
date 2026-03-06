#include"logic.h"
void reverse(int array[DEFAULT_SIZE], int length) {
	int n = length / 2;

	for (int i = 0; i <= n; i++)
	{
		int temp = array[i];
		array[i] = array[length - 1 - i];
		array[length - 1 - i] = temp;
	}


}
