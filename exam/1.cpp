#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }

    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }

  double calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle myRectangle;

    myRectangle.setLength(5.0);
    myRectangle.setWidth(3.0);


    double length = myRectangle.getLength();
    double width = myRectangle.getWidth();

    double area = myRectangle.calculateArea();
    cout << "Rectangle with length " << length << " and width " << width
              << " has an area of " << area << endl;

    return 0;
}

