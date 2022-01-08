
#include <iostream>
#include <cstddef>
#include <conio.h>

/*
	Source by AlphaCodingSkills
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

void myfunc(int*) {
	cout << "Pointer to integer overload.\n";
}

void myfunc(double*) {
	cout << "Pointer to double overload.\n";
}

void myfunc(nullptr_t) {
	cout << "Null pointer overload.\n";
}

int main() {
	int* num_int = 0;
	double* num_double = 0;

	myfunc(num_int);
	myfunc(num_double);
	myfunc(nullptr);

	_getch();
	return 0;
}

