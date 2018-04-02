#include <iostream>

using namespace std;

class Shape{
protected:
	int width, height;

public:
	Shape(int a = 0, int b = 0){
		width = a;
		height = b;
	}
	virtual int area(){
		cout << "Parent class area: " << endl;
		return 0;
	}
};

class Rectangle: public Shape{
public:
	Rectangle(int a = 0, int b = 0){}
		int area(){
			cout << "Rectangle class area: " << endl;
			return (width*height);
		}
};

class Triangle: public Shape{
public:
	Triangle(int a = 0, int b = 0){}
	int area() {
		cout << "Triangle class area: " << endl;
		return (width*height/2);
	}
};

int main(){
	Shape *shape;
	cout << "shape is: " << shape << endl;
	Rectangle rec(10,7);
	Triangle tri(10,5);
	shape = &rec;
	cout << "shape is: " << shape << endl;
	shape->area();
	shape = &tri;
	cout << "shape is: " << shape << endl;
	shape->area();
	return 0;
}
