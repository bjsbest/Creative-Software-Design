#pragma once

class Shape {
    public:
        Shape();
        Shape(int target_x, int target_y, string brush);

        double GetArea() {};
        int GetPerimeter() {};
        void Draw(int canvas_width, int canvas_height) {};
    protected:
    // Define common properties for all shape types
        int target_x, target_y;
        string brush;
};

class Square : public Shape{
    public:
        Square(int length);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
    private:
        int length;
};

class Rectangle : public Shape{
    public:
        Rectangle(int width, int height);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
    private:
        int width, height;
};

class Diamond : public Shape{
    public:
        Diamond(int distance);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
    private:
        int distance;
};