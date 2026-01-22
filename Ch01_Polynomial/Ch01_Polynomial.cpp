#include <iostream>
#include "Ch01_Polynomial.h"
using namespace std;
int main(void) {
	Polynomial p1, p2;

	cin >> p1 >> p2;
	Polynomial p3 = p1 + p2;
	cout << p1 << p2 << p3;
}