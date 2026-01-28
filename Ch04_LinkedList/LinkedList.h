#include <iostream>
using namespace std;
class IntList;
class Node {
public:
	friend class IntList;
	Node(int d = 0, Node*l = 0) : data(d), link(l) {}
	friend ostream& operator<<(ostream&, IntList&);
private:
	int data;
	Node* link;
};

class IntList {
public:
	IntList() { last = first = 0; }
	void InsertBack(int);
	void InsertFront(int);
	void Delete(int);
	friend ostream& operator<<(ostream&, IntList&);
private:
	Node* first;
	Node* last;
};

