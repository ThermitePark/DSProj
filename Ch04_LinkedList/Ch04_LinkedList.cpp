#include "LinkedList.h"
ostream& operator<<(ostream& os, IntList& il) {
	Node* ptr = il.first;
	while (ptr != 0) {
		os << ptr->data << " ";
		ptr = ptr->link;
		os << endl;
		return os;
	}
}

void IntList::InsertBack(int e) {
	if (!first) {
		first = last = new Node(e);
	}
	else {
		last->link = new Node(e);
		last = last->link;
	}
}

void IntList::InsertFront(int e) {
	if (!first) {
		first = last = new Node(e);
	}
	else {
		first = new Node(e, first);
	}
}

void IntList::Delete(int e) {
	Node* cur = first;
	Node* prev = first;
	Node* x = NULL;
	bool found = false;
	while (!found && cur) {
		if (cur->data != e) {
			prev = cur;
			cur = cur->link;
		}
		else {
			found = true;
			x = cur;
			prev->link = cur->link;

			if (cur == first) {
				first = first->link;
			}
			if (cur == last) {
				last = prev;
				delete x;
			}

		}

	}
	if (!found) {
		cout << "No" << e << "to delete!" << endl;
	}
}