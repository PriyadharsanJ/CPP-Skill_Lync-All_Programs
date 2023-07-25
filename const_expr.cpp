#include<iostream>

using namespace std;

int main(){


    //Const variable and normal variable - throws error.
    //Const should not be modified during runtime.
//    int num = 8;
//    constexpr int result3 =  num * 2;
    constexpr int a = 10;
    constexpr int b = 20;

    //constexpr and lambda
    //works on C++17 and above

//    constexpr auto fun = [a, b](){return a + b;};

    cout<<fun()<<endl;
}
