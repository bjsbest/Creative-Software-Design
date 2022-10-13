#include <iostream>
#include <string>
#include "shapes.h"
using namespace std;

int main(){
	while(true){
		cout << "Shape?" << endl;
		string letter;
		cin >> letter;
		if(letter == "C"){
			double myX, myY, myRadius;
			cin >> myX >> myY >> myRadius;
			Circle c(myX, myY, myRadius);
			cout << "area : " << c.getArea() << ", perimeter : " << c.getPerimeter() << endl;
		}
		else if(letter == "R"){
			double myX1, myX2, myY1, myY2;
			cin >> myX1 >> myY2 >> myX2 >> myY1;
			Rectangle r(myX1, myX2, myY1, myY2);
			cout << "area : " << r.getArea() << ", perimeter : " << r.getPerimeter() << endl;
		}
		else if(letter == "Q"){
			 break;
		}
	}
	return 0;
}
