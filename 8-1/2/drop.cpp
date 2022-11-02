#include <iostream>
#include <cmath>
using namespace std;

Planet::Planet(float gravity){
    this->gravity = gravity;
}
float Planet::drop(float height){
      float time = sqrt(2*height/gravity);
      return time;
} // drop from "height"...

Earth::Earth(){
    this->gravity = gravity;
}
void Earth::simulate(float height){
    cout << "Drop from " << height << "m, " << drop(height) << " seconds." << endl; 
}

Moon::Moon(){
    this->gravity = gravity;
}
void Moon::simulate(float height){
    cout << "Drop from " << height << "m, " << drop(height) << " seconds." << endl;
}