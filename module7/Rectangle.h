// Rectangle.h
// D. Singletary
// 6/1/17
// Rectangle class specification

#ifndef _RECTANGLE_H
#define _RECTANGLE_H

// declare the Rectangle class
class Rectangle
{
    private:
        int width = 0, height = 0;
    public:
        Rectangle();
        Rectangle(int w, int h);
        ~Rectangle();
        int getWidth();
        int getHeight();
        void setWidth(int w);
        void setHeight(int h);
        int calculateArea();
};

#endif

 

