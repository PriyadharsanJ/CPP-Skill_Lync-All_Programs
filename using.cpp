#include<iostream>
using namespace std;

class Base{
public:
    void greet(){
        cout<<"from Base"<<endl;
    }
};

class Derived : public Base{
public:
    using Base :: greet;
    void greet(string s){
        cout<<"From Derived : "<<s<<endl;
        greet();
    }
};


int main(){
    Derived d;

    d.greet("Yes");

    return 0;
}

