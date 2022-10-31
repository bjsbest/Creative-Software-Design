#include <iostream>
#include <string>
#include "shapes.h"
using namespace std;

// Shape
Shape::Shape() : target_x(0), target_y(0), brush("."){}

// Square
Square::Square(int target_x, int target_y, int length, string brush){
    this->target_x = target_x;
    this->target_y = target_y;
    this->length = length;
    this->brush = brush;
}
double Square::GetArea(){
    return length*length;
}
int Square::GetPerimeter(){
    return 4*length;
}
void Square::Draw(int canvas_width, int canvas_height){
    // Canvas Setting
    string** mat = new string*[canvas_height + 1];
    for(int i=0; i<canvas_height + 1; i++){
        mat[i] = new string[canvas_width + 1];
    }
    for(int i=1; i<canvas_width+1; i++){
        mat[0][i] = to_string(i-1);
    }
    for(int i=1; i<canvas_height+1; i++){
        mat[i][0] = to_string(i-1);
        for(int j=1; j<canvas_width + 1; j++){
            mat[i][j] = ".";
        }
    }
    // Drawing Square
    // 시작점(top left)의 mat 위에서의 실제 위치는 target_x+1, target_y+1
    if(target_x + length > canvas_width + 1){
        // case1. x와 y 모두 범위를 벗어난 경우
        if(target_y + length > canvas_height + 1){
            for(int i=target_y+1; i<canvas_height+1; i++){
                for(int j=target_x+1; j<canvas_width+1; j++){
                    mat[i][j] = brush;
                }
            }
        }
        // case2. x만 범위를 벗어나고, y는 범위 내 있는 경우
        else{
            for(int i=target_y+1; i<target_y + length+1; i++){
                for(int j=target_x+1; j<canvas_width+1; j++){
                    mat[i][j] = brush;
                }
            }
        }
    }
    else{
        // case3. x는 범위 내, y는 범위를 벗어난 경우
        if(target_y + length > canvas_height + 1){
            for(int i=target_y+1; i<canvas_height+1; i++){
                for(int j=target_x+1; j<target_x+length+1; j++){
                    mat[i][j] = brush;
                }
            }
        }
        // case4. x와 y 모두 범위 내에 있는 경우
        else{
            for(int i=target_y+1; i<target_y+length+1; i++){
                for(int j=target_x+1; j<target_x+length+1; j++){
                    mat[i][j] = brush;
                }
            }
        }
    }
    // Print and Delete
    for(int i=0; i<canvas_height+1; i++){
        for(int j=0; j<canvas_width+1; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0; i<canvas_height+1; i++){
        delete[] mat[i];
    }
    delete[] mat;
}

// Rectangle
Rectangle::Rectangle(int target_x, int target_y, int width, int height, string brush){
    this->target_x = target_x;
    this->target_y = target_y;
    this->width = width;
    this->height = height;
    this->brush = brush;
}
double Rectangle::GetArea(){
    return width*height;
}
int Rectangle::GetPerimeter(){
    return 2*(width + height);
}
void Rectangle::Draw(int canvas_width, int canvas_height){
    // Canvas Setting
    string** mat = new string*[canvas_height + 1];
    for(int i=0; i<canvas_height + 1; i++){
        mat[i] = new string[canvas_width + 1];
    }
    for(int i=1; i<canvas_width+1; i++){
        mat[0][i] = to_string(i-1);
    }
    for(int i=1; i<canvas_height+1; i++){
        mat[i][0] = to_string(i-1);
        for(int j=1; j<canvas_width + 1; j++){
            mat[i][j] = ".";
        }
    }
    // Drawing Rectangle
    // 시작점(top left)의 mat 위에서의 실제 위치는 target_x+1, target_y+1
    if(target_x + width > canvas_width + 1){
        // case1. x와 y 모두 범위를 벗어난 경우
        if(target_y + height > canvas_height + 1){
            for(int i=target_y+1; i<canvas_height+1; i++){
                for(int j=target_x+1; j<canvas_width+1; j++){
                    mat[i][j] = brush;
                }
            }
        }
        // case2. x만 범위를 벗어나고, y는 범위 내 있는 경우
        else{
            for(int i=target_y+1; i<target_y + height+1; i++){
                for(int j=target_x+1; j<canvas_width+1; j++){
                    mat[i][j] = brush;
                }
            }
        }
    }
    else{
        // case3. x는 범위 내, y는 범위를 벗어난 경우
        if(target_y + height > canvas_height + 1){
            for(int i=target_y+1; i<canvas_height+1; i++){
                for(int j=target_x+1; j<target_x+width+1; j++){
                    mat[i][j] = brush;
                }
            }
        }
        // case4. x와 y 모두 범위 내에 있는 경우
        else{
            for(int i=target_y+1; i<target_y+height+1; i++){
                for(int j=target_x+1; j<target_x+width+1; j++){
                    mat[i][j] = brush;
                }
            }
        }
    }
    // Print and Delete
    for(int i=0; i<canvas_height+1; i++){
        for(int j=0; j<canvas_width+1; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0; i<canvas_height+1; i++){
        delete[] mat[i];
    }
    delete[] mat;
}

// Diamond
Diamond::Diamond(int target_x, int target_y, int distance, string brush){
    this->target_x = target_x;
    this->target_y = target_y;
    this->distance = distance;
    this->brush = brush;
}
double Diamond::GetArea(){
    return distance*distance/2;
}
int Diamond::GetPerimeter(){
    int diagonal = (distance/2) + 1;
    return 4*diagonal;
}
void Diamond::Draw(int canvas_width, int canvas_height){
    // Canvas Setting
    string** mat = new string*[canvas_height + 1];
    for(int i=0; i<canvas_height + 1; i++){
        mat[i] = new string[canvas_width + 1];
    }
    for(int i=1; i<canvas_width+1; i++){
        mat[0][i] = to_string(i-1);
    }
    for(int i=1; i<canvas_height+1; i++){
        mat[i][0] = to_string(i-1);
        for(int j=1; j<canvas_width + 1; j++){
            mat[i][j] = ".";
        }
    }
    // Diamond...?
    // target_x, target_y를 중심으로 한 행씩 출력할래...
    // 다이아몬드 윗부분 출력
    for(int i=1; i <= (distance/2) && target_y + i < canvas_height + 2; i++){
        // i번째 출력하는 행에서는 총 2i-1개의 별을 출력...중앙을 기준으로 좌우 i-1개씩
        for(int j = (target_x + 1) - (i-1); j<=(target_x+1)+(i-1); j++){
            if(j <= 0){
                mat[target_y + i][1] = brush;
                if(target_y + distance + 1 - i < canvas_height + 2){
                    mat[target_y+1+distance-i][i] = brush;
                }
            }
            else if(j > canvas_width + 1){
                mat[target_y + i][canvas_width + 1] = brush; 
                if(target_y + distance + 1 - i < canvas_height + 2){
                    mat[target_y+1+distance-i][canvas_width + 1] = brush;
                }
            }
            else{
                mat[target_y + i][j] = brush;
                if(target_y + distance + 1 - i < canvas_height + 2){
                    mat[target_y+1+distance-i][j] = brush;
                }
            }
        }
    }
    // 가운데 줄 출력
    if(target_y + (distance/2) + 1 < canvas_height + 2){
        // 가로줄은 총 distance개이긴 한데
        for(int j = target_x + 1 - (distance/2); j <= target_x + 1 + (distance/2); j++){
            if(j<=0){
                mat[target_y + (distance/2) + 1][1] = brush;
            }
            else if(j > canvas_width + 1){
                mat[target_y + (distance/2) + 1][canvas_width + 1] = brush;
            }
            else{
                mat[target_y + (distance/2) + 1][j] = brush;
            }
        }
    }
    // print and delete
    for(int i=0; i<canvas_height+1; i++){
        for(int j=0; j<canvas_width+1; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0; i<canvas_height+1; i++){
        delete[] mat[i];
    }
    delete[] mat;
}