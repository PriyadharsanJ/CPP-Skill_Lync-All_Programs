#include <iostream>
using namespace std;

class MyClass{
//public:
protected:
    int x = 10;
    void myFunction(){
        cout<<"Parent Class\n";
    }
};

class MyChild1 : public MyClass{
};

class MyChild2 : public MyClass{
};

class MyGrandChild : public MyChild1{
};

int main(){

    MyGrandChild obj;

    obj.myFunction();

    cout<<obj.x;

    return 0;
}

