#include <iostream>
#include <iomanip>
#include <vector>
#include "clock_time.h"
#include "clock.h"
using namespace std;

int main(){
    int num;
    cin >> num;

    vector<Clock*> clocks;
    clocks.push_back(new SundialClock(0, 0, 0)); // clocks[0]
    clocks.push_back(new CuckooClock(0, 0, 0)); // clocks[1]
    clocks.push_back(new GrandfahterClock(0, 0, 0)); // clocks[2]
    clocks.push_back(new WristClock(0, 0, 0)); // clocks[3]
    clocks.push_back(new AtomicClock(0, 0, 0)); // cloks[4]

    for(int i=0; i<clocks.size(); i++){
        clocks[i]->reset();
    }

    cout << "Reported Clock Times After Resetting : " << endl;
    for(int i=0; i<clocks.size(); i++){
        clocks[i]->displayTime();
    }
    cout << endl << "Running the Clocks..." << endl << endl;
    for(int i=0; i<clocks.size(); i++){
        for(int j=0; j<num; j++){
            clocks[i]->tick();
        }
    }

    cout << "Reported Clock Times After Running : " << endl;
    for(int i=0; i<clocks.size(); i++){
        clocks[i]->displayTime();
    }
    for(int i=0; i<clocks.size(); i++){
        delete clocks[i];
    }
    return 0;
}