#pragma once

class Animal{
    protected:
        std::string name;
        int age;
    public:
        Animal(std::string name, int age);
        virtual void printInfo();
};

class Zebra : public Animal{
    private:
        int numStripes;
    public:
        Zebra(std::string name, int age, int numStripes);
        virtual void printInfo();
};

class Cat : public Animal{
    private:
        std::string favoriteToy;
    public:
        Cat(std::string name, int age, std::string favoriteToy);
        virtual void printInfo();
};