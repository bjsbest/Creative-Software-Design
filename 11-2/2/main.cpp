#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "my_vector.h"
using namespace std;

// 1. main 안쪽에 vec_a, b, c를 임의의 size로 선언(나중에 resize할 거니까)
// 2. command_length를 입력받아, 새로운 벡터를 이용해 a, b, c resize + 내용물 옮기기


int main(){
    // Command Variable Declaration
    string command, first, second, op, input_print;
    int command_length;
    MyVector vec_a(1);
    MyVector vec_b(1);
    MyVector vec_c(1);
    // Loop
    while(true){
        cin >> command;
        if(command == "quit"){break;}
        else if(command == "new"){
            cin >> command_length;
            MyVector newvec_a(command_length);
            MyVector newvec_b(command_length);
            MyVector newvec_c(command_length);
            vec_a = newvec_a; vec_b = newvec_b; vec_c = newvec_c; // resize
            cout << "Enter a" << endl;
            cin >> vec_a;
            cout << "Enter b" << endl;
            cin >> vec_b;
        }
        else if(command == "c="){
            cin >> first;
            if(first == "a"){
                cin >> op >> second;
                if(stoi(second) == 0){ // input a or b
                    if(op == "+"){
                        if(second == "a"){
                            MyVector vec_d(vec_a + vec_a);
                            vec_c = vec_d;
                        }
                        else if(second == "b"){
                            MyVector vec_d(vec_a + vec_b);
                            vec_c = vec_d;
                        }
                    }
                    else if(op == "-"){
                        if(second == "a"){
                            MyVector vec_d(vec_a - vec_a);
                            vec_c = vec_d;
                        }
                        else if(second == "b"){
                            MyVector vec_d(vec_a - vec_b);
                            vec_c = vec_d;
                        }
                    }
                }
                else{ // input number
                    if(op == "+"){
                        MyVector vec_d(vec_a + stoi(second));
                        vec_c = vec_d; 
                    }
                    else if(op == "-"){
                        MyVector vec_d(vec_a - stoi(second));
                        vec_c = vec_d;
                    }
                }
            }
            else if(first == "b"){
                cin >> op >> second;
                if(stoi(second) == 0){ // input a or b
                    if(op == "+"){
                        if(second == "a"){
                            MyVector vec_d(vec_b + vec_a);
                            vec_c = vec_d;
                        }
                        else if(second == "b"){
                            MyVector vec_d(vec_b + vec_b);
                            vec_c = vec_d;
                        }
                    }
                    else if(op == "-"){
                        if(second == "a"){
                            MyVector vec_d(vec_b - vec_a);
                            vec_c = vec_d;
                        }
                        else if(second == "b"){
                            MyVector vec_d(vec_b - vec_b);
                            vec_c = vec_d;
                        }
                    }
                }
                else{ // input number
                    if(op == "+"){
                        MyVector vec_d(vec_b + stoi(second));
                        vec_c = vec_d;
                    }
                    else if(op == "-"){
                        MyVector vec_d(vec_b - stoi(second));
                        vec_c = vec_d;
                    }
                }
            }
        }
        else if(command == "print"){
            cin >> input_print;
            if(input_print == "a"){
                cout << vec_a << endl;
            }
            else if(input_print == "b"){
                cout << vec_b << endl;
            }
            else if(input_print == "c"){
                cout << vec_c << endl;
            }
        }
    }
    return 0;
}