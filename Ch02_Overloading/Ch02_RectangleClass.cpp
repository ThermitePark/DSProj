#include <iostream>
#include "Ch02_Overloading.h"
using namespace std;

Rectangle::Rectangle(int x = 0, int  y = 0, int h = 0, int w = 0) :
	xLow(x), yLow(y), height(h), width(w) { }
Rectangle::~Rectangle() {}
void Rectangle::Print() {
	cout << "xLow: " << xLow << ", yLow: " << yLow << ", height: " << height << ", width: " << width << endl;
}
int Rectangle::Area() {
	return height * width;
}
bool Rectangle::LessThan(Rectangle& s) {
	if (Area() < s.Area()) {
		return true;
	}
	else {
		return false;
	}
}
bool Rectangle::Equal(Rectangle& s) {
	if (this == &s) {
		return true;
	}
	else {
		return false;
	}
}

int Rectangle::GetHeight() {
	return height;
}
int Rectangle::GetWidth() {
	return width;
}