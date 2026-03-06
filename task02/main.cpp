#include "util.h"

int main() {
	int number;

	cout << "Input your number:";
	cin >> number;


	bool perfect= is_perfect_number(number) ;
	string msg = perfect ? "No" : "Yes";
	print(msg);

	return 0;
}