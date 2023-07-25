#include<iostream>
using namespace std;

class Base{
public:
    virtual void print(){
        cout<<"Base"<<endl;
    }
};

class Derived : public Base{
public:
    void print() override{
        cout<<"Derived"<<endl;
    }
};

int main(){
    Base b;
    Derived d;
//    Base *bptr;
    Base *bptr = static_cast<Base*>(&d);
    bptr->print();
//    b.print();
    Derived *dptr = static_cast<Derived*>(bptr);
    dptr->print();
//    d.print();
    return 0;
}
