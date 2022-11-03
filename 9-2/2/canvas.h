#pragma once

class Canvas {
    public:
        Canvas(size_t row, size_t col);
        ~Canvas();
        // Change this canvas size to w x h. Preserve already existing shapes on the canvas.
        void Resize(size_t w, size_t h);
        // Dot with the brush at (x,y). If (x,y) is outside the canvas, just ignore it.
        bool DrawPixel(int x, int y, char brush);
        //Print out the canvas
        void Print();
        // Erase all (initialize with '.')
        void Clear();
    private:
    // Define data member to save drawn shapes (note the resize function)
    // Canvas Size Variable
    size_t row;
    size_t col;
    char** cnv;
    char** temp_cnv;
};

class Shape {
    public:
        virtual ~Shape();
        virtual void Draw(Canvas* canvas);
        virtual void PrintShapeInfo();
    protected:
    // Define common properties of shapes
    int target_x, target_y;
    char brush;
};

class Rectangle : public Shape {
    private:
        int width, height;
    public:
        Rectangle(int target_x, int target_y, int width, int height, char brush);
        virtual void Draw(Canvas* canvas);
        virtual void PrintShapeInfo();
};

class UpTriangle : public Shape { 
    private:
        int height;
    public:
        UpTriangle(int target_x, int target_y, int height, char brush);
        virtual void Draw(Canvas* canvas);
        virtual void PrintShapeInfo();
};

class DownTriangle : public Shape {
    private:
        int height;
    public:
        DownTriangle(int target_x, int target_y, int height, char brush);
        virtual void Draw(Canvas* canvas);
        virtual void PrintShapeInfo();
};

class Diamond : public Shape {
    private:
        int distance;
    public:
        Diamond(int target_x, int target_y, int height, char brush);
        virtual void Draw(Canvas* canvas);
        virtual void PrintShapeInfo();
};