#include <iostream>
using namespace std;

class Shape {
private:
    string color;
    double area;

public:

    void setColor(const std::string& shapeColor) {
        color = shapeColor;
    }

   string& getColor()  {
        return color;
    }

    double getArea()  {
        return area;
    }

       virtual void calculateArea() = 0;

     virtual void display()  {
        cout << "Color: " << color << ", Area: " << area;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    void setRadius(double circleRadius) {
        radius = circleRadius;
    }
    void calculateArea() override {
        Shape::getArea(); 
        double circleArea = M_PI * radius * radius;
        Shape::calculateArea(); 
    }

    
    void display() const override {
        cout << "Circle - ";
        display();
        cout << ", Radius: " << radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    void setDimensions(double rectLength, double rectWidth) {
        length = rectLength;
        width = rectWidth;
    }

    void calculateArea() override {
        Shape::getArea();
        double rectangleArea = length * width;
        Shape::calculateArea(); 
		    }

    void display() const override {
        cout << "Rectangle - ";
        Shape::display();
        cout << ", Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Shape* shapes[2];
    Circle myCircle;
    Rectangle myRectangle;

    myCircle.setRadius(5.0);
    myRectangle.setDimensions(4.0, 6.0);

    shapes[0] = &myCircle;
    shapes[1] = &myRectangle;

    for (int i = 0; i < 2; ++i) {
        shapes[i]->calculateArea();
        shapes[i]->display();
        cout << endl;
    }
    return 0;
}

