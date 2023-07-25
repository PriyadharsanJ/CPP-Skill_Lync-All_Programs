#include<iostream>
#include<math.h>
using namespace std;

class Test{

public:
    int a;
    mutable int b;
    Test(int x, int y){
        a = x;
        b = y;
    }

    void setA(int x=0){
        a = x;
    }

    void setB(int y=0){
        b = y;
    }

    void disp(){
        cout<<"a : "<<a<<"b : "<<endl;
    }
};

int main(){
    const Test t(10,20);
    cout<<t.a<<" "<<t.b<<endl;
    //t.a = 90;
    t.b = 100;
    cout<<t.a<<" "<<t.b<<endl;
    return 0;
}







