#include <iostream>
#include <string>
#include <vector>
#include "canvas.h"
using namespace std;

// Canvas Class
Canvas::Canvas(size_t row, size_t col){
    this->row = row;
    this-> col = col;
    cnv = new char*[row];
    for(int i=0; i<row; i++){
        cnv[i] = new char[col];
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cnv[i][j] = '.';
        }
    }
}
Canvas::~Canvas(){
    // Deallocate cnv
    for(int i=0; i<row; i++){
        delete[] cnv[i];
    }
    delete[] cnv;
}
void Canvas::Resize(size_t w, size_t h){
    // 1st. Delete
    for(int i=0; i<row; i++){
        delete[] cnv[i];
    }
    delete[] cnv;
    // 2nd. Re-Allocate & Initialize
    cnv = new char*[h];
    for(int i=0; i < h; i++){
        cnv[i] = new char[w];
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cnv[i][j] = '.';
        }
    }
}
bool Canvas::DrawPixel(int x, int y, char brush){
    // if (x, y) is inside the canvas, set with the brush at (x, y) and return true, else return false.
    if(0 <= x < row && 0 <= y < col){
        cnv[x][y] = brush;
        return true;
    }
    else{ return false; }
}
void Canvas::Print(){
    cout << " ";
    // 기준 가로줄 출력
    for(int i=0; i<col; i++){
        cout << i%10;
    }
    cout << endl;
    // 기준 세로줄 + 픽셀 출력
    for(int i=0; i<row; i++){
        cout << i%10;
        for(int j=0; j<col; j++){
            cout << cnv[i][j];
        }
        cout << endl;
    }

}
void Canvas::Clear(){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cnv[i][j] = '.';
        }
    }
}

// Shape Class
Shape::~Shape(){}
void Shape::Draw(Canvas* canvas){}
void Shape::PrintShapeInfo(){}

// Rectangle Class
Rectangle::Rectangle(int target_x, int target_y, int width, int height, char brush){
    this->target_x = target_x;
    this->target_y = target_y;
    this->width = width;
    this->height = height;
    this->brush = brush;
}
void Rectangle::Draw(Canvas* canvas){
    for(int i=target_y; i<target_y + height; i++){
        for(int j=target_x; j<target_x + width ; j++){
            canvas->DrawPixel(i, j, brush);
        }
    }
}
void Rectangle::PrintShapeInfo(){
    cout << "rect " << target_x << " " << target_y << " " << width << " " << height << " " << brush << endl;
}

// UpTriangle Class
UpTriangle::UpTriangle(int target_x, int target_y, int height, char brush){
    this->target_x = target_x;
    this->target_y = target_y;
    this->height = height;
    this->brush = brush;
}
void UpTriangle::Draw(Canvas* canvas){
    for(int i=0; i<height; i++){
        for(int j=target_x - i; j<target_x + i + 1; j++){
            canvas->DrawPixel(target_y + i, j, brush);
        }
    }
}
void UpTriangle::PrintShapeInfo(){
    cout << "tri_up " << target_x << " " << target_y << " " << height << " " << brush << endl;
}

// DownTriangle Class
DownTriangle::DownTriangle(int target_x, int target_y, int height, char brush){
    this->target_x = target_x;
    this->target_y = target_y;
    this->height = height;
    this->brush = brush;
}
void DownTriangle::Draw(Canvas* canvas){
    for(int i=0; i<height; i++){
        for(int j=target_x - i; j<target_x + i + 1; j++){
            canvas->DrawPixel(target_y - i, j, brush);
        }
    }
}
void DownTriangle::PrintShapeInfo(){
    cout << "tri_down " << target_x << " " << target_y << " " << height << " " << brush << endl;
}
// Diamond Class
Diamond::Diamond(int target_x, int target_y, int distance, char brush){
    this->target_x = target_x;
    this->target_y = target_y;
    this->distance = distance;
    this->brush = brush;
}
void Diamond::Draw(Canvas* canvas){
    for(int i=1; i< distance + 1; i++){
        for(int j = target_x - distance + i; j < target_x + distance - i + 1 ; j++){
            canvas->DrawPixel(target_y - i, j, brush);
        }
    }
    for(int j = target_x - distance; j < target_x + distance + 1; j++){
        canvas->DrawPixel(target_y, j, brush);
    }
    for(int i = 1; i < distance + 1; i++){
        for(int j = target_x - distance + i; j < target_x + distance - i + 1; j++){
            canvas->DrawPixel(target_y + i, j, brush);
        }
    }
}
void Diamond::PrintShapeInfo(){
    cout << "diamond " << target_x << " " << target_y << " " << distance << " " << brush << endl;
}




/* Memo : 11.03
1. Diamond : Segmentation Fault - 반복문 DrawPixel 확인하기..
2. Delete Command
3. Resize : Double Free or Corruption (out) /  Aborted (Core Dumped)
*/