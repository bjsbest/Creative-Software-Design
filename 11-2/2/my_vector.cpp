#include <iostream>
#include <vector>
#include <string>
#include "my_vector.h"
using namespace std;

MyVector::MyVector(){
    this->a = new arr[length];
}
MyVector::MyVector(int length){
    this->a = new arr[length];
}
MyVector::~MyVector(){
    delete a;
}

MyVector MyVector::operator+(const MyVector& b){
    MyVector v(length);
        for(int i=0; i<length; i++){
            v[i] = *(this->a + i) + *(b->a + i);
        }
    return v;
}
MyVector MyVector::operator-(const MyVector& b){
    MyVector v(length);
        for(int i=0; i<length; i++){
            v[i] = *(this->a + i) + *(b->a + i);
        }
    return v;
}

MyVector MyVector::operator+(const int b){
    MyVector v(length);
        for(int i=0; i<length; i++){
            v[i] = *(this->a + i) + b;  
        }
    return v;
}
MyVector MyVector::operator-(const int b){
    MyVector v(length);
        for(int i=0; i<length; i++){
            v[i] = *(this->a + i) - b; 
        }
    return v;
}

ostream& operator<<(ostream& out, MyVector& b){
    for(int i=0; i<length; i++){
        cout << *(b->a + i) << " ";
    }
    cout << endl;
}
istream& operator>>(istream& in, MyVector& b){
    for(int i=0; i<length; i++){
        cin >> *(b->a + i);
    }
}