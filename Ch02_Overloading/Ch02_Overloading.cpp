#include <iostream>
#include "Ch02_Overloading.h"
using namespace std;

int main(void) {
	Rectangle r(2, 3, 4, 6), s(1, 2, 6, 6);

	cout << "<rectangle r>"; 
	r.Print();
	cout << "<rectangle s>";
	s.Print();

	if (r.LessThan(s)) {
		cout << "s is Bigger";
	}
	else if (r.EqualSize(s)) {
		cout << "Same Size";
	}
	else {
		cout << "r is Bigger";
	}
	cout << endl << endl;
	return 0;
}