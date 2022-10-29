// 나 이제 Diamond draw만 하면 되는뎅...
#include <iostream>
#include <string>
using namespace std;

// Shape
Shape::Shape() : target_x(0), target_y(0), brush(".");
Shape::Shape(target_x, target_y, brush) : target_x(target_x), target_y(target_y), brush(".");

// Square
Square::Square(int length) : Shape(target_x, target_y, ".") {
    this->length = length;
}
double GetArea(){
    return length*length;
}
double GetPerimeter(){
    return 4*length;
}
void Draw(int canvas_width, int canvas_height){
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
            for(int i=target_y+1; i<target_y + length; i++){
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
                for(int j=target_x+1; j<target_x+length; j++){
                    mat[i][j] = brush;
                }
            }
        }
        // case4. x와 y 모두 범위 내에 있는 경우
        else{
            for(int i=target_y+1; i<target_y+length; i++){
                for(int j=target_x+1; j<target_x+length; j++){
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
Rectangle::Rectangle(int width, int height) : Shape(target_x, target_y, "."){
    this->width = width;
    this->length = length;
}
double GetArea(){
    return width*height;
}
double GetPerimeter(){
    return 2*(width + height);
}
void Draw(int canvas_width, int canvas_height){
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
            for(int i=target_y+1; i<target_y + height; i++){
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
                for(int j=target_x+1; j<target_x+width; j++){
                    mat[i][j] = brush;
                }
            }
        }
        // case4. x와 y 모두 범위 내에 있는 경우
        else{
            for(int i=target_y+1; i<target_y+height; i++){
                for(int j=target_x+1; j<target_x+width; j++){
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
Diamond::Diamond(int distance) : Shape(target_x, target_y, "."){
    this->distance = distance;
}
double GetArea(){
    return distance*distance/2;
}
double GetPerimeter(){
    int diagonal = (distance/2) + 1;
    return 4*diagonal;
}
void Draw(int canvas_width, int canvas_height){
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
    }
    // Diamond...?

}