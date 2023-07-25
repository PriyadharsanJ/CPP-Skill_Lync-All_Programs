#include<iostream>
using namespace std;

class Base{
public:
    Base(){
        cout<<"Constructing base\n";
    }

    virtual ~Base(){
        cout<<"Destructing base\n";
    }
};

class Derived : public Base{
public:
    Derived(){
        cout<<"Constructing Derived\n";
    }

    virtual ~Derived(){
        cout<<"Destructing Derived\n";
    }
};

int main(){

    Derived *dptr;
    Derived d;

    dptr = &d;

    delete dptr;

    return 0;
}



