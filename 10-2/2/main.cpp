#include <iostream>
#include <iomanip>
#include <vector>
#include "clock_time.h"
#include "clock.h"
using namespace std;

int main(){
    int alarmArr[5];
    int num;
    cin >> alarmArr[0] >> alarmArr[1] >> alarmArr[2] >> alarmArr[3] >> alarmArr[4];
    cin >> num;

    vector<Clock*> clocks;
    clocks.push_back(new SundialClock(0, 0, 0)); // clocks[0]
    clocks.push_back(new CuckooClock(0, 0, 0)); // clocks[1]
    clocks.push_back(new GrandfahterClock(0, 0, 0)); // clocks[2]
    clocks.push_back(new WristClock(0, 0, 0)); // clocks[3]
    clocks.push_back(new AtomicClock(0, 0, 0)); // cloks[4]

    vector<Clock*> alarms;
    alarms.push_back(new SundialClock(0,0,0));
    alarms.push_back(new CuckooClock(0, 0, 0));
    alarms.push_back(new GrandfahterClock(0, 0, 0));
    alarms.push_back(new WristClock(0, 0, 0));
    alarms.push_back(new AtomicClock(0, 0, 0));

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

    //Additional Condition for Problem 2
    for(int i=0; i<5; i++){
        for(int j=0; j<alarmArr[i]; j++){
            alarms[i]->tick();
        }
    }
    for(int i=0; i<5; i++){
        alarms[i]->displayAlarm();
    }
    cout << endl;

    cout << "Reported Clock Times After Running : " << endl;
    for(int i=0; i<clocks.size(); i++){
        clocks[i]->displayTime();
    }
    for(int i=0; i<clocks.size(); i++){
        delete clocks[i];
        delete alarms[i];
    }
    return 0;
}