#include <iostream>
#include <string>
#include <vector>
#include "canvas.h"
using namespace std;

int main(){
       vector<Shape*> commands;
       size_t _row, _col;
       cin >> _col >> _row;
       Canvas myCanvas(_col, _row) ;
       myCanvas.Print();
       while(true){
            string input;
            cin >> input;
            if(input == "quit"){
                break;
            }
            else if(input == "add"){
                string command_shape;
                cin >> command_shape;
                if(command_shape == "rect"){
                    int x, y, w, h;
                    char b;
                    cin >> x >> y >> w >> h >> b;
                    commands.push_back(new Rectangle(x, y, w, h, b));
                }
                else if(command_shape == "tri_up"){
                    int x, y, h;
                    char b;
                    cin >> x >> y >> h >> b;
                    commands.push_back(new UpTriangle(x, y, h, b));
                }
                else if(command_shape == "tri_down"){
                    int x, y, h;
                    char b;
                    cin >> x >> y >> h >> b;
                    commands.push_back(new DownTriangle(x, y, h, b));
                }
                else if(command_shape == "diamond"){
                    int x, y, d;
                    char b;
                    cin >> x >> y >> d >> b;
                    commands.push_back(new Diamond(x, y, d, b));
                }
                else{
                    cout << "Invalid Input - Shape Command Error " << endl;
                    break;
                }
            }
            else if(input == "delete"){
                int targetNum;
                cin >> targetNum;
                for(int i = targetNum+1; i<commands.size(); i++){
                    commands[i-1] = commands[i];
                }
                commands.resize(commands.size() - 1);
            }
            else if(input == "draw"){
                myCanvas.Clear();
                for(int i=0; i<commands.size(); i++){
                    commands[i]->Draw(&myCanvas);
                }
                myCanvas.Print();
            }
            else if(input == "dump"){
                for(int i=0; i<commands.size(); i++){
                    cout << i << " ";
                    commands[i]->PrintShapeInfo();
                }
            }
            else if(input == "resize"){
                size_t new_row, new_col;
                cin >> new_col >> new_row;
                myCanvas.Resize(new_col, new_row);
            }
            else{
                cout << "Invalid Input - Canvas Command Error" << endl;
                break;
            }
       }
       return 0;
}