#pragma once

class Circle{
	private:
		double xpos;
		double ypos;
		double radius;
	public:
		Circle();
		Circle(double x, double y, double r);
		double getRadius();
		double getArea();
		double getPerimeter();
};

class Rectangle{
	private:
		double x1;
		double x2;
		double y1;
		double y2;
	public:
		Rectangle();
		Rectangle(double x1, double x2, double y1, double y2);
		double getXDistance();
		double getYDistance();
		double getArea();
		double getPerimeter();
};
