#pragma once

// error per second
#define ERROR_SUNDIAL 0
#define ERROR_CUCKOO 0
#define ERROR_GRANDFATHER 0.000694444
#define ERROR_WRIST 0.000347222
#define ERROR_ATOMIC 0.000034722

// class declaration
class Clock{
    protected:
        ClockTime _clockTime;
        double _driftPerSecond;
        double _totalDrift;
    public:
        Clock(int hour, int minute, int second, double driftPerSecond);
        void reset();
        void tick();
        virtual void displayTime() = 0; // Pure Virtual Function
};

// NaturalClock - Sundial Clock
class NaturalClock : public Clock{
    public:
        NaturalClock(int hour, int minute, int second, double driftPerSecond);
};
class SundialClock : public NaturalClock{
    public:
        SundialClock(int hour, int minute, int second);
        void displayTime();
};

// MechanicalClock : Cuckoo Clock, Grandfather Clock
class MechanicalClock : public Clock{
    public:
        MechanicalClock(int hour, int minute, int second, double driftPerSecond);
};
class CuckooClock : public MechanicalClock{
    public:
        CuckooClock(int hour, int minute, int second);
        void displayTime();
};
class GrandfahterClock : public MechanicalClock{
    public:
        GrandfahterClock(int hour, int minute, int second);
        void displayTime();
};

// DigitalClock : Wrist Clock
class DigitalClock : public Clock{
    public:
        DigitalClock(int hour, int minute, int second, double driftPerSecond);
};
class WristClock : public DigitalClock{
    public:
        WristClock(int hour, int minute, int second);
        void displayTime();
};

// QuantumClock : Atomic Clock
class QuantumClock : public Clock{
    public:
        QuantumClock(int hour, int minute, int second, double driftPerSecond);
};
class AtomicClock : public QuantumClock{
    public:
        AtomicClock(int hour, int minute, int second);
        void displayTime();
};