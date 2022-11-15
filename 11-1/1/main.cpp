#include <iostream>
#include <string>
#include "my_string.h"
using namespace std;

int main(){
    MyString a, b, c;
    string command;
    while(true){
        cin >> command;
        if(command == "quit"){
            break;
        }
        else{
            if(command == "new"){
                cout << "Enter a" << endl;
                cin >> a;
                cout << "Enter b" << endl;
                cin >> b;
            }
            if(command == "c="){
                string _first, _second;
                int mul; char op;
                cin >> _first >> op;
                if(_first == "a"){
                    if(op == '+'){
                        cin >> _second;
                        if(_second == "a"){
                            c = a + a;
                        }
                        else if(_second == "b"){
                            c = a + b;
                        }
                    }
                    else if(op == '*'){
                        cin >> mul;
                        c = a*mul;
                    }
                }
                else if(_first == "b"){
                    if(op == '+'){
                        cin >> _second;
                        if(_second == "a"){
                            c = b + a;
                        }
                        else if(_second == "b"){
                            c = b + b;
                        }
                    }
                    else if(op == '*'){
                        cin >> mul;
                        c = b*mul;
                    }
                }
            }
            if(command == "print"){
                string cmdstr;
                cin >> cmdstr;
                if(cmdstr == "a"){
                    cout << a << endl;
                }
                else if(cmdstr == "b"){
                    cout << b << endl;
                }
                else if(cmdstr == "c"){
                    cout << c << endl;
                }
            }
        }
    }
    return 0;
}