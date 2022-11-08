#include <iostream>
#include <vector>
#include <string>
#include "shape.h"
using namespace std;

int main(){
    vector<Shape*> arr;
    string command;
    while(true){
        cin >> command;
        if(command == "0"){
            for(int i=0; i<arr.size(); i++){
                cout << arr[i]->getArea() << endl;
            }
            for(int i=0; i<arr.size(); i++){
                delete arr[i];
            }
            break;
        }
        else if(command == "t"){
            double w, h;
            cin >> w >> h;
            arr.push_back(new Triangle(w, h));
        }
        else if(command == "r"){
            double w, h;
            cin >> w >> h;
            arr.push_back(new Rectangle(w, h));
        }
        else{
            cout << "Invalid Input!" << endl;
        }
    }
    return 0;
}