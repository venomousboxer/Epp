#include <iostream>

using namespace std;

class Shape {
	virtual void draw()=0;
};

class Rectangle : public Shape{
	public :
	void draw(){
		cout<<"Drawing Rectangle\n";
	}
};

class Square : public Shape{
	public :
	void draw(){
		cout<<"Drawing Square\n";
	}
};

class Triangle : public Shape{
	public :
	void draw(){
		cout<<"Drawing Triangle\n";
	}
};

class ShapeMaker{
	Rectangle r;
	Square s;
	Triangle t;

	public :
	
	ShapeMaker(){
		r = Rectangle();
		s = Square();
		t = Triangle();
	}

	void drawRectangle(){
		r.draw();
	}

	void drawSquare(){
		s.draw();
	}

	void drawTriangle(){
		t.draw();
	}
};

int main(int argc, char const *argv[])
{
	ShapeMaker obj = ShapeMaker();
	obj.drawRectangle();
	obj.drawSquare();
	obj.drawTriangle();
	return 0;
}