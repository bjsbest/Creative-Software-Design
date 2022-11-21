#include <iostream>
#include <string>
#include "my_vector.h"
using namespace std;

// Constructors and Destructor
MyVector::MyVector(){}

MyVector::MyVector(int length){
    this->length = length;
    a = new double[length]; // dynamically allocate array length[length]
}

MyVector::~MyVector(){
    delete a;
}

// Copy costructor
MyVector::MyVector(MyVector& vec){
    this->length = vec.length;
    this->a = new double[vec.length];
    for(int i=0; i<vec.length; i++){
        *(this->a + i) = *(vec.a + i);
    }
}

// Operators
MyVector MyVector::operator+(const MyVector& b){
    MyVector v(length);
    for(int i=0; i<this->length; i++){
        *(v.a + i) = *(this->a + i) + *(b.a + i);
    }
    return v;
}

MyVector MyVector::operator-(const MyVector& b){
    MyVector v(length);
    for(int i=0; i<this->length; i++){
        *(v.a + i) = *(this->a + i) - *(b.a + i);
    }
    return v;
}

MyVector MyVector::operator+(const int b){
    MyVector v(length);
    for(int i=0; i<this->length; i++){
        *(v.a + i) = *(this->a + i) + static_cast<double>(b);
    }
    return v;
}

MyVector MyVector::operator-(const int b){
    MyVector v(length);
    for(int i=0; i<this->length; i++){
        *(v.a + i) = *(this->a + i) - static_cast<double>(b);
    }
    return v;
}

ostream& operator<<(ostream& out, MyVector& b){
    for(int i=0; i<b.length; i++){
        out << *(b.a + i) << " ";
    }
    return out;
}

istream& operator>>(istream& in, MyVector& b){
    for(int i=0; i<b.length; i++){
        in >> *(b.a + i);
    }
    return in;
}