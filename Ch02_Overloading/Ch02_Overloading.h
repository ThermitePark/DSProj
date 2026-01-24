#pragma once
#ifndef CH02_OVERLOADING_H
#define CH02_OVERLOADING_H
class Rectangle {
public:
	Rectangle(int, int, int, int);
	~Rectangle();
	void Print();
	int Area();
	bool LessThan(Rectangle&);
	bool Equal(Rectangle&);
	int GetHeight();
	int GetWidth();
private:
	int xLow, yLow, height, width;
};
#endif