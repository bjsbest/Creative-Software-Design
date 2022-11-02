#include <iostream>
#include <string>
#include <cmath>
#include "drop.h"
using namespace std;


int main(){
    while(true){
        string pln;
        cin >> pln;
        if(pln == "quit"){
            break;
        }
        else if(pln == "Earth"){
            float f;
            cin >> f;
            Earth earth(9.81);
            earth.simulate(f);

        }
        else if(pln == "Moon"){
            float f;
            cin >> f;
            Moon moon(1.62);
            moon.simulate(f);
        }
    }
    return 0;
}