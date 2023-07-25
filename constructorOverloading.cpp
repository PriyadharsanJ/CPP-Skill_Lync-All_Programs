#include <iostream>

using namespace std;

class MyClass{
public:
    int sal;
    MyClass();
    MyClass(int);
    MyClass(int, string;)
};

MyClass::MyClass(){
    cout<< "Object created - Default!" <<endl;

    sal = 4500;
}

MyClass::MyClass(int s){
    cout<<" Parameterised! " <<endl;
    sal = s;
}

MyClass::MyClass(int s, string name){
    cout<<"Parameterised 2"<<endl;
    sal = s;
}

int main(){
    MyClass myObj;
    cout<<myObj.sal<<endl;
    return 0;
}
