#include <iostream>
#include <string>
#include "number.h"
using namespace std;

int main(){
    while(true){
        string command;
        cin >> command;
        if(command == "quit"){
            break;
        }
        else if(command == "number"){
            int n;
            cin >> n;
            Number myNum;
            myNum.setNumber(n);
            cout << "GetNumber() : " << myNum.getNumber() << endl;
        }
        else if(command == "square"){
            int n;
            cin >> n;
            Square mySquare;
            mySquare.setNumber(n);
            cout << "GetNumber() : " << mySquare.getNumber() << endl;
            cout << "GetSquare() : " << mySquare.getSquare() << endl; 
        }
        else if(command == "cube"){
            int n;
            cin >> n;
            Cube myCube;
            myCube.setNumber(n);
            cout << "GetNumber() : " << myCube.getNumber() << endl;
            cout << "GetSquare() : " << myCube.getSquare() << endl;
            cout << "GetCube() : " << myCube.getCube() << endl;
        }
    }
    return 0;
}