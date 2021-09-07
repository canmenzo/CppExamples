// Rectangle.cpp
// M. Ozmen
// 3/21/2020
// Rectangle class implementation and test function

#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle() { width = 1; height = 1; }
Rectangle::Rectangle(int w, int h) { width = w; height = h; }
Rectangle::~Rectangle() {}
int Rectangle::getWidth() { return width; }
int Rectangle::getHeight() { return height; }
void Rectangle::setWidth(int w) { width = w; }
void Rectangle::setHeight(int h) { height = h; }
int Rectangle::calculateArea() { return width * height; }

// end of Rectangle class implementation

// function prototypes
void displayRectangle(Rectangle r);
void doubleAndDisplayRectangle(Rectangle& r);

int main()
{
    Rectangle r1, r2;
    int w, h; // temp width and height

    cout << "Please enter the width and height for the first rectangle: ";
    cin >> w >> h;
    r1.setWidth(w);
    r1.setHeight(h);

    cout << "Please enter the width and height for the second rectangle: ";
    cin >> w >> h;
    r2.setWidth(w);
    r2.setHeight(h);

    // calling functions to display and modify-display
    displayRectangle(r1);
    displayRectangle(r2);
    doubleAndDisplayRectangle(r1);
    doubleAndDisplayRectangle(r2);

    return 0;
}

// displayRectangle functions displays width, height and area to the console.
void displayRectangle(Rectangle r)
{
    cout << "Rectangle: width = " << r.getWidth() << ", height = " << r.getHeight() << ", and area = " << r.calculateArea() << endl;
}

// doubleAndDisplayRectangle function doubles the width and the height and then displays width, height and area to the console.
void doubleAndDisplayRectangle(Rectangle& r)
{
    cout << "Doubling the rectangle dimensions!" << endl;
    int w = r.getWidth();
    int h = r.getHeight();
    r.setWidth(w * 2);
    r.setHeight(h * 2);
    cout << "Rectangle: width = " << r.getWidth() << ", height = " << r.getHeight() << ", and area = " << r.calculateArea() << endl;
}
