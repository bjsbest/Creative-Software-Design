#pragma once

class Shape {
    public:
        Shape();

        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
    protected:
    // Define common properties for all shape types
        int target_x, target_y;
        std::string brush;
};

class Square : public Shape{
    public:
        Square(int target_x, int target_y, int length, std::string brush);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
    private:
        int length;
};

class Rectangle : public Shape{
    public:
        Rectangle(int target_x, int target_y, int width, int height, std::string brush);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
    private:
        int width, height;
};

class Diamond : public Shape{
    public:
        Diamond(int target_x, int target_y, int distance, std::string brush);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
    private:
        int distance;
};