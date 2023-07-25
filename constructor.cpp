
#include <iostream>

using namespace std;

class MyClass{
public:
    int sal;
    string n;
    MyClass();
    MyClass(int);
    MyClass(int, string);
};

MyClass::MyClass(){
    cout<< "Object created - Default!" <<endl;

    sal = 4500;
}

MyClass::MyClass(int s){
    cout<<"Parameterised! " <<endl;
    sal = s;
}

MyClass::MyClass(int s, string name){
    cout<<"Parameterised 2"<<endl;
    sal = s;
    n = name;
}

int main(){
    MyClass myObj, myObj1(6969), myObj2(420, "ABC");
    cout<<myObj.sal<<endl;
    cout<<myObj1.sal<<endl;
    cout<<myObj2.n<<endl;
    return 0;
}
