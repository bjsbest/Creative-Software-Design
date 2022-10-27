#include <iostream>
#include <string>
#include "rect.h"
using namespace std;

int main(){
    while(true){
        string command;
        cin >> command;
        if(command == "quit"){
            break;
        }
        else if(command == "square"){
            int w;
            cin >> w;
            Square sq(w);
            sq.print();
        }
        else if(command == "nonsquare"){
            int w, h;
            cin >> w >> h;
            NonSquare nsq(w, h);
            nsq.print();
        }
    }
    return 0;
}