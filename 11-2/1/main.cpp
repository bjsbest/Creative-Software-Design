#include <iostream>
#include <string>
#include "my_string2.h"
using namespace std;

int main(){
    MyString2 a, b, c;
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
            if(command == "set"){ 
                string option;
                cin >> option;
                if(option == "" || "copy"){
                    string _first, _second;
                    int mul; char op;
                    cin >> _first >> op;
                    if(_first == "a"){
                        if(op == '+'){
                            cin >> _second;
                            if(_second == "a"){
                                MyString2 d = a + a;
                                MyString2 c(d);
                            }
                            else if(_second == "b"){
                                MyString2 d = a + b;
                                MyString2 c(d);
                            }
                        }
                        else if(op == '*'){
                            cin >> mul;
                            MyString2 d = a*mul;
                            MyString2 c(d);
                        }
                    }
                    else if(_first == "b"){
                        if(op == '+'){
                            cin >> _second;
                            if(_second == "a"){
                                MyString2 d = b + a;
                                MyString2 c(d);
                            }
                            else if(_second == "b"){
                                MyString2 d = b + b;
                                MyString2 c(d);
                            }
                        }
                        else if(op == '*'){
                            cin >> mul;
                            MyString2 d = b*mul;
                            MyString2 c(d);
                        }
                    }
                }
                else if(option == "assign"){
                    c = a;
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