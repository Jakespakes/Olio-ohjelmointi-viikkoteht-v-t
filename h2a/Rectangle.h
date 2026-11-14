#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private: 
	double width;
	double height;
public: 
	int getArea() const;
	int getCircum() const;
	void setWidth(double);
	void setHeight(double);
};


#endif