#include "shapes.h"

Circle::Circle(){xpos = 0; ypos = 0; radius=0;}
Circle::Circle(double x, double y, double r){xpos = x; ypos = y; radius = r;}

double Circle::getRadius(){return radius;}
double Circle::getArea(){return 3.14*getRadius()*getRadius();}
double Circle::getPerimeter(){return 6.28*getRadius();}

Rectangle::Rectangle(){x1 = 0; x2 = 0; y1 = 0; y2 = 0;}
Rectangle::Rectangle(double x1, double x2, double y1, double y2){
	this->x1 = x1;
	this->x2 = x2;
	this->y1 = y1;
	this->y2 = y2;
}

double Rectangle::getXDistance(){return x2-x1;}
double Rectangle::getYDistance(){return y2-y1;}
double Rectangle::getArea(){return getXDistance()*getYDistance();}
double Rectangle::getPerimeter(){return 2*(getXDistance()+getYDistance());}
