#include <iostream>
#include <vector>
#include <string>
#include "shapes.h"
using namespace std;

int main(){
    // Command
    int canvas_1, canvas_2;
    cin >> canvas_1 >> canvas_2;
    while(true){
        string command;
        cin >> command;
        if(command == "quit"){
            break;
        }
        else if(command == "rect"){
            int top_left_x, top_left_y, width, height;
            string brush;
            cin >> top_left_x >> top_left_y >> width >> height >> brush;
            Rectangle r1(top_left_x, top_left_y, width, height, brush);
            cout << "Area : " << r1.GetArea() << endl << "Perimeter : " << r1.GetPerimeter() << endl;
            r1.Draw(canvas_1, canvas_2);
        }
        else if(command == "square"){
            int top_left_x, top_left_y, length;
            string brush;
            cin >> top_left_x >> top_left_y >> length >> brush;
            Square s1(top_left_x, top_left_y, length, brush);
            cout << "Area : " << s1.GetArea() << endl << "Perimeter : " << s1.GetPerimeter() << endl;
            s1.Draw(canvas_1, canvas_2);
        }
        else if(command == "diamond"){
            int top_x, top_y, distance;
            string brush;
            cin >> top_x >> top_y >> distance >> brush;
            Diamond d1(top_x, top_y, distance, brush);
            cout << "Area : " << d1.GetArea() << endl << "Perimeter : " << d1.GetPerimeter() << endl;
            d1.Draw(canvas_1, canvas_2); 
        }
    }
    return 0;
}