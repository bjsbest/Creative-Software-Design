#include <iostream>
#include <string>
#include <vector>
#include "animal.h"
using namespace std;

int main(){
    vector<Animal*> arr;
    while(true){
        string command;
        cin >> command;
        if(command == "0"){
            for(int i=0; i<arr.size(); i++){
                arr[i].printInfo();
            }
            for(int i=0; i<arr.size(); i++){
                delete arr[i];
            }
            break;
        }
        else if(command == "z"){
            string _name;
            int _age, _numStripes;
            cin >> _name >> _age >> _numStripes;
            arr.push_back(new Zebra(_name, _age, _numStripes));
        }
        else if(command == "c"){
            string _name, _favoriteToy;
            int _age;
            cin >> _name >> _age >> _favoriteToy;
            arr.push_back(new Cat(_name, _age, _favoriteToy));
        }
    }
    return 0;
}