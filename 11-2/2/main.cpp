#include <iostream>
#include <string>
#include <stdlib.h>
#include "my_vector.h"
using namespace std;

int main(){
    string command, command_length, cmdstr, operand_1, operand_2, op; int num;
    MyVector* a;
    MyVector* b;
    MyVector* c;
    while(true){
        cin >> command;
        if(command == "new"){
            cin >> command_length;
            a = new MyVector(stoi(command_length));
            b = new MyVector(stoi(command_length));
            cout << "Enter a" << endl;
            cin >> *a;
            cout << "Enter b" << endl;
            cin >> *b;
        }
        else if(command == "c="){
            cin >> operand_1 >> op >> operand_2;
            if(operand_1 == "a"){
                if(op == "+"){
                    if(operand_2 == "a"){
                        MyVector d(*a+*a);
                        c = new MyVector(d);
                    }
                    else if(operand_2 == "b"){
                        MyVector d(*a+*b);
                        c = new MyVector(d);
                    }
                    else{
                        MyVector d(*a+stoi(operand_2));
                        c = new MyVector(d);
                    }
                }
                else if(op == "-"){
                    if(operand_2 == "a"){
                        MyVector d(*a-*a);
                        c = new MyVector(d);
                    }
                    else if(operand_2 == "b"){
                        MyVector d(*a-*b);
                        c = new MyVector(d);
                    }
                    else{
                        MyVector d(*a-stoi(operand_2));
                        c = new MyVector(d);
                    }
                }
            }
            else if(operand_1 == "b"){
                if(op == "+"){
                    if(operand_2 == "a"){
                        MyVector d(*b+*a);
                        c = new MyVector(d);
                    }
                    else if(operand_2 == "b"){
                        MyVector d(*b+*b);
                        c = new MyVector(d);
                    }
                    else{
                        MyVector d(*b+stoi(operand_2));
                        c = new MyVector(d);
                    }
                }
                else if(op == "-"){
                    if(operand_2 == "a"){
                        MyVector d(*b-*a);
                        c = new MyVector(d);
                    }
                    else if(operand_2 == "b"){
                        MyVector d(*b-*b);
                        c = new MyVector(d);
                    }
                    else{
                        MyVector d(*b-stoi(operand_2));
                        c = new MyVector(d);
                    }
                }
            }
        }
        else if(command == "print"){
            cin >> cmdstr;
            if(cmdstr == "a"){
                cout << *a << endl;
            }
            else if(cmdstr == "b"){
                cout << *b << endl;
            }
            else if(cmdstr == "c"){
                cout << *c << endl;
                delete c;
            }
        }
        else if(command == "quit"){
                delete a;
                delete b;
                break;
        }
    }
    return 0;
}