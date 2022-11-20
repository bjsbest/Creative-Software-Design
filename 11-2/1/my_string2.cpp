#include <iostream>
#include "my_string2.h"
using namespace std;

MyString2::MyString2(){} // mimic default constructor
MyString2::MyString2(MyString2& p){
    this->str = p.str;
    cout << "(Copy Constructor)" << endl;
}
MyString2 MyString2::operator+(const MyString2& b){
    MyString2 s;
    s.str = this->str + b.str;
    return s;
}
MyString2 MyString2::operator*(const int b){
    MyString2 s;
    s.str = this->str;
    for(int i=1; i<b; i++){
        s.str += this->str;
    }
    return s;
}
ostream& operator<<(ostream& out, MyString2& my_string){
    out << my_string.str;
    return out;
}
istream& operator>>(istream& in, MyString2& my_string){
    in >> my_string.str;
    return in;
}
MyString2& MyString2::operator=(MyString2& p){
    this->str = p.str;
    cout << "(Assignment Operator)" << endl;
    return *this;
}