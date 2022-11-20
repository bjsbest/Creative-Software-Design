#include <iostream>
#include <string>
#include "my_string2.h"
using namespace std;

int main(){
    MyString2 a, b;
    MyString2* c1; // for "Copy Constructor"
    MyString2 c2; // for "Assignment Operator"
    while(true){
    // new, set, print command (blue curl braces)
        string command, option_cmd, set_option;
        cin >> command;
        if(command == "quit"){break;}
        else if(command == "new"){
            cout << "Enter a" << endl; cin >> a;
            cout << "Enter b" << endl; cin >> b;
        }
        // Setting option : 1) Set Copy 2) Set Assign 3) NO COMMANDS -> If no commands then set copy
        else if(command == "set"){
            // set copy OR set assign (yellow curl braces)
            string _first, _second; char op; int mul; // string and operator, multiplying number which are neccecary to declare c
            cin >> set_option;
            if(set_option == "copy"){
                cin >> option_cmd;
                if(option_cmd == "c="){
                    cin >> _first;
                    if(_first == "a"){
                        cin >> op;
                        if(op == '+'){
                            cin >> _second;
                            if(_second == "a"){
                                // Copy Construct a+a
                                MyString2 d(a+a);
                                c1 = new MyString2(d);
                            }
                            else if(_second == "b"){
                                // Copy Construct a+b
                                MyString2 d(a+b);
                                c1 = new MyString2(d);
                            }
                        }
                        else if(op == '*'){
                            cin >> mul;
                            // Copy Construct a*mul
                            MyString2 d(a*mul);
                            c1 = new MyString2(d);
                        }
                    }
                    else if(_first == "b"){
                        cin >> op;
                        if(op == '+'){
                            cin >> _second;
                            if(_second == "a"){
                                // Copy Construct b+a
                                MyString2 d(b+a);
                                c1 = new MyString2(d);
                            }
                            else if(_second == "b"){
                                // Copy Construct b+b
                                MyString2 d(b+b);
                                c1 = new MyString2(d);
                            }
                        }
                        else if(op == '*'){
                            cin >> mul;
                            // Copy Construct a*mul
                            MyString2 d(b*mul);
                            c1 = new MyString2(d);
                        }
                    }
                }
            }
            else if(set_option == "assign"){
                cin >> option_cmd;
                if(option_cmd == "c="){
                    cin >> _first;
                    if(_first == "a"){
                        cin >> op;
                        if(op == '+'){
                            cin >> _second;
                            if(_second == "a"){
                                // Assignment Construct a+a
                                MyString2 d(a+a);
                                c2 = d;
                            }
                            else if(_second == "b"){
                                // Assignment Construct a+b
                                MyString2 d(a+b);
                                c2 = d;
                            }
                        }
                        else if(op == '*'){
                            cin >> mul;
                            // Assignment Construct a*mul
                            MyString2 d(a*mul);
                            c2 = d;
                        }
                    }
                    else if(_first == "b"){
                        cin >> op;
                        if(op == '+'){
                            cin >> _second;
                            if(_second == "a"){
                                // Assignment Construct b+a
                                MyString2 d(b+a);
                                c2 = d;
                            }
                            else if(_second == "b"){
                                // Assignment Construct b+b
                                MyString2 d(b+b);
                                c2 = d;
                            }
                        }
                        else if(op == '*'){
                            cin >> mul;
                            // Assignment Construct a*mul
                            MyString2 d(b*mul);
                            c2 = d;
                        }
                    }
                }
            }
        }
        else if(command == "c="){ // The case "NO COMMAND"
            set_option = "copy";
            string _first, _second; char op; int mul;
            cin >> _first;
            if(_first == "a"){
                cin >> op;
                if(op == '+'){
                    cin >> _second;
                    if(_second == "a"){
                        // Copy Construct a+a
                        MyString2 d(a+a);
                        c1 = new MyString2(d);
                    }
                    else if(_second == "b"){
                        // Copy Construct a+b
                        MyString2 d(a+b);
                        c1 = new MyString2(d);
                    }
                }
                else if(op == '*'){
                    cin >> mul;
                    // Copy Construct a*mul
                    MyString2 d(a*mul);
                    c1 = new MyString2(d);
                }
            }
            else if(_first == "b"){
                cin >> op;
                if(op == '+'){
                    cin >> _second;
                    if(_second == "a"){
                        // Copy Construct b+a
                        MyString2 d(b+a);
                        c1 = new MyString2(d);
                    }
                    else if(_second == "b"){
                        // Copy Construct b+b
                        MyString2 d(b+b);
                        c1 = new MyString2(d);
                    }
                }
                else if(op == '*'){
                    cin >> mul;
                    // Copy Construct a*mul
                    MyString2 d(b*mul);
                    c1 = new MyString2(d);
                }
            }
        }
        else if(command == "print"){
            string cmdstr;
            cin >> cmdstr;
            if(cmdstr == "a"){cout << a << endl;}
            else if(cmdstr == "b") {cout << b << endl;}
            else if(cmdstr == "c"){
                if(set_option == "copy"){
                    cout << *c1 << endl;
                    delete c1;
                }
                else if(set_option == "assign"){
                    cout << c2 << endl;
                }
            }
        }
    }
    return 0;
}