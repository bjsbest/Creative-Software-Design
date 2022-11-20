#include <iostream>
#include <vector>
#include <string>
#include "my_vector.h"
using namespace std;

MyVector::MyVector(){
    this->a = new double[length];
}
MyVector::MyVector(int length){
    this->a = new double[length];
}
MyVector::~MyVector(){
    delete a;
}

MyVector MyVector::operator=(MyVector& v){
    delete this->a;
    MyVector vec_new(v.length);
    for(int i=0; i<this->length; i++){
        *(vec_new.a + i) = *(this->a + i);
    }
    return vec_new;
}

MyVector MyVector::operator+(const MyVector& b){
    MyVector v(length);
        for(int i=0; i<length; i++){
            *(v.a + i) = *(this->a + i) + *(b.a + i);
        }
    return v;
}
MyVector MyVector::operator-(const MyVector& b){
    MyVector v(length);
        for(int i=0; i<length; i++){
            *(v.a + i) = *(this->a + i) + *(b.a + i);
        }
    return v;
}

MyVector MyVector::operator+(const int b){
    MyVector v(length);
        for(int i=0; i<length; i++){
            *(v.a + i) = *(this->a + i) + b;  
        }
    return v;
}
MyVector MyVector::operator-(const int b){
    MyVector v(length);
        for(int i=0; i<length; i++){
            *(v.a + i) = *(this->a + i) - b; 
        }
    return v;
}

ostream& operator<<(ostream& out, MyVector& b){
    for(int i=0; i<b.length; i++){
        cout << *(b.a + i) << " ";
    }
    return out;
}
istream& operator>>(istream& in, MyVector& b){
    for(int i=0; i<b.length; i++){
        cin >> *(b.a + i);
    }
    return in;
}