#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "my_vector.h"
using namespace std;


int main(){
    // Command Variable Declaration
    string command, command_length, first, second, op, input_print;
    // Loop
    while(true){
        cin >> command;
        if(command == "quit"){break;}
        else if(command == "new"){
            cin >> command_length;
            MyVector vec_a(command_length);
            MyVector vec_b(command_length);
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
                    if 
                }
                else{

                }
            }
            else if(first == "b"){

            }
        }
        else if(command == "print"){

        }
    }
    return 0;
}