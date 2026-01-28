#include <iostream>
#include "LinkedList.h"

int main() {
	IntList il;
	il.InsertBack(5);
	il.InsertBack(7);
	il.InsertBack(9);
	cout << il;
}