//
// Created by jixie on 2020/4/2.
//

#ifndef POLYHEAD_H
#define POLYHEAD_H

class Shape {
protected:
    int width, height;
public:
    Shape( int a, int b);
    virtual int area()=0;

};


class Rectangle: public Shape{
public:
//    子类调用父类构造函数
    Rectangle( int a, int b);
    int area ();

};

class Triangle: public Shape{
public:
    Triangle( int a, int b);
    int area ();

};

#endif
