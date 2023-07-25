#include <iostream>
using namespace std;

class Animals{
public:
    void myFunction(){
        cout<<"Parent Class 1\n";
    }
};

class MyClass2{
public:
    void myOtherFunction(){
        cout<<"Parent Class 2\n";
    }
};

class MyChildClass : public MyClass1, public MyClass2{};

int main(){

    MyChildClass obj;

    obj.myFunction();
    obj.myOtherFunction();

    return 0;
}


