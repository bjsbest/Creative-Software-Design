#include <iostream>
#include <iomanip>
#include "clock_time.h"
#include "clock.h"
using namespace std;

// Clock class (Abstract)
Clock::Clock(int hour, int minute, int second, double driftPerSecond){
    _clockTime.setTime(hour, minute, second, driftPerSecond);
    _totalDrift = 0;
}
void Clock::reset(){
    _clockTime.reset();
}
void Clock::tick(){ // increment를 통해 초를 하나씩 셀 때마다 tick에 의한 delay를 추가로 더하는 함수
    _clockTime.increment();
    _totalDrift += _driftPerSecond;
}

// Natural Clock classes
NaturalClock::NaturalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond){}
SundialClock::SundialClock(int hour, int minute, int second) : NaturalClock(hour, minute, second, ERROR_SUNDIAL){}
void SundialClock::displayTime(){
    cout << "SundialClock ";
    _clockTime.display();
    cout << ", total drift : " << _totalDrift << endl;
}

// Mechanical Clock classes
MechanicalClock::MechanicalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond){}
CuckooClock::CuckooClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second, ERROR_CUCKOO){}
void CuckooClock::displayTime(){
    cout << "CuckooClock ";
    _clockTime.display();
    cout << ", total drift : " << _totalDrift << endl;
}
GrandfahterClock::GrandfahterClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second, ERROR_GRANDFATHER){}
void GrandfahterClock::displayTime(){
    cout << "GrandfatherClock ";
    _clockTime.display();
    cout << ", total drift : " << _totalDrift << endl;
}

// Digital Clock classess
DigitalClock::DigitalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond){}
WristClock::WristClock(int hour, int minute, int second) : DigitalClock(hour, minute, second, ERROR_WRIST){}
void WristClock::displayTime(){
    cout << "WristClock ";
    _clockTime.display();
    cout << ", total drift : " << _totalDrift << endl;
}

// Quantum Clock classes
QuantumClock::QuantumClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond){}
AtomicClock::AtomicClock(int hour, int minute, int second) : QuantumClock(hour, minute, second, ERROR_ATOMIC){}
void AtomicClock::displayTime(){
    cout << "AtomicClock ";
    _clockTime.display();
    cout << ", total drift : " << _totalDrift << endl;
}