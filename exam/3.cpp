#include <iostream>
using namespace std;

class Shape {
private:
    string color;
    double area;

public:
        void setColor(string& shapeColor) {
        color = shapeColor;
    }

    void setArea(double shapeArea) {
        area = shapeArea;
    }
     string& getColor() {
        return color;
    }

    double getArea() {
        return area;
    }

    virtual void calculateArea() = 0; 
	};

class Circle : public Shape {
private:
    double radius;

public:
        void setRadius(double circleRadius) {
        radius = circleRadius;
    }

      void calculateArea() override {
        setArea(3.14 * radius * radius);
		    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
        void setLength(double rectLength) {
        length = rectLength;
    }

    void setWidth(double rectWidth) {
        width = rectWidth;
    }

    void calculateArea() override {
        setArea(length * width);
    }
};

int main() {
    Circle circle;
    circle.setRadius(5.0);
    circle.calculateArea();

    Rectangle rectangle;
    rectangle.setLength(4.0);
    rectangle.setWidth(6.0);
    rectangle.calculateArea();

    cout << "Circle Area: " << circle.getArea() << endl;
    cout << "Rectangle Area: " << rectangle.getArea() << nendl;

    return 0;
}

