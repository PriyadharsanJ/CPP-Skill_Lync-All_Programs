#include<iostream>
using namespace std;

class Base1{
public:
    virtual void print() const{
        cout<<"Base1"<<endl;
    }
};

class Base2{
public:
    virtual void print() const{
        cout<<"Base2"<<endl;
    }
};

class Derived : public Base1, public Base2{
public:
    void print() const{
        cout<<"Derived"<<endl;
    }
};

int main(){
    Base1 *b1 = new Base1;
    Base2 *b2 = new Base2;

    Derived *d = new Derived;

    b1->print();
    b2->print();
    d->print();

    b2 = dynamic_cast<Base2*>(b1);

    if(b2)
        b2->print();
    else
        cout<<"No Base2\n";

    b1 = d;
    b1->print();

    b2 = dynamic_cast<Base2*>(b1);


    if(b2)
        b2->print();
    else
        cout<<"No Base2\n";

    return 0;
}

