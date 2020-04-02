//
// Created by jixie on 2020/4/1.
//

#include <iostream>
#include "Polyhead.h"
using namespace std;

Shape::Shape(int a=0, int b=0) {
    width = a;
    height = b;
}

Rectangle::Rectangle(int a, int b):Shape(a,b){}
int Rectangle::area() {
    cout << "Rectangle class area :" <<width * height<<endl;
    return (width * height);
}


Triangle::Triangle(int a, int b):Shape(a, b){}
int Triangle::area() {
    cout << "Triangle class area :" <<width * height / 2<<endl;
    return (width * height / 2);
}


