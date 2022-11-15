#include <iostream>
#include <string>
#include "my_string.h"
using namespace std;

MyString MyString::operator+(const MyString& b){
    MyString s;
    s.str = this->str + b.str;
    return s;
}
MyString MyString::operator*(const int b){
    MyString s;
    s.str = this->str;
    for(int i=1; i<b; i++){
        s.str += this->str;
    }
    return s;
}
ostream& operator<<(ostream& out, MyString& my_string){
    out << my_string.str;
    return out;
}
istream& operator>>(istream& in, MyString& my_string){
    in >> my_string.str;
    return in;
}