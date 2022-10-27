#include <iostream>
#include <vector>
#include <string>
#include "shapes.h"
using namespace std;

int main(){
    // Command
    while(true){
        string command;
        cin >> command;
        if(command == "quit"){
            break;
        }
        else if(command == "rect"){
            int top_left_x, top_left_y, width, height;
            char brush;
            cin >> top_left_x >> top_left_y >> width >> height >> brush;
        }
        else if(command == "square"){
            int top_left_x, top_left_y, length;
            char brush;
            cin >> top_left_x >> top_left_y >> length >> brush;
        }
        else if(command == "diamond"){
            int 
        }
        resetMatrix(ref_matrix, canvas_1 + 1, canvas_2 + 1);
    }
    return 0;
}