#include <iostream>
#include <iomainp>
#include "clock_time.h"
#include "clock.h"
using namespace std;

// Clock class (Abstract)
Clock::Clock(int hour, int minute, int second, double driftPerSecond){
    _clockTime(hour, minute, second);
    _driftPerSecond = driftPerSecond;
}
void Clock::reset(){

}
void Clock::tick(){

}

// Natural Clock classes
NaturalClock::NatrualClock(int hour, int minute, int second, double driftPerSecond){

}
SundialClock::SundialClock(int hour, int minute, int second, double driftPerSecond){

}
SundialClock::displayTime(){

}

// Mechanical Clock classes
MechanicalClock::MechanicalClock(int hour, int minute, int second, double driftPerSecond){

}
CuckooClock::CuckooClock(int hour, int minute, int second, double driftPerSecond){

}
CuckooClock::displayTime(){

}
GrandfahterClock::GrandfahterClock(int hour, int minute, int second, double driftPerSecond){

}
GrandfahterClock::displayTime(){

}

// Digital Clock classess
DigitalClock::DigitalClock(int hour, int minute, int second, double driftPerSecond){

}
WristClock::WristClock(int hour, int minute, int second, double driftPerSecond){

}
WristClock::displayTime(){

}

// Quantum Clock classes
QuantumClock::QuantumClock(int hour, int minute, int second, double driftPerSecond){

}
AtomicClock::AtomicClock(int hour, int minute, int second, double driftPerSecond){

}
AtomicClock::displayTime(){
    
}