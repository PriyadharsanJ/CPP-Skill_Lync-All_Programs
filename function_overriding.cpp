#include <iostream>
using namespace std;

class Animals{
public:
    void animalSound(){
        cout<<"Animalsssss!\n";
    }
};

class Pig : public Animals{
public:
    void animalSound(){
        cout<<"Piggy says askjdhsakjd\n";
    }
};

class Dog : public Animals{
public:
    void animalSound(){
        cout<<"Doggy says woof woof\n";
    }
};


int main(){

    Animals a;
    Dog d;
    Pig p;

    a.animalSound();
    d.animalSound();
    p.animalSound();

    return 0;
}



