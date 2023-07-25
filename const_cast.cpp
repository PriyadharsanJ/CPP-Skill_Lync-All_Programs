#include<iostream>
using namespace std;

int add(int *num){
    return (*num + 10);
}

int main(){
    const int val =10;
    const int *ptr = &val;

    int *ptr1 = const_cast<int*>(ptr);
    cout<<add(ptr1);

//
//    const int a = 20;
//    const int b;
//
//    cout<<"Old Value is "<<*b<<"\n";
//
//    int b = const_cast<int>(a);
//    b=0,a=40;
//    cout<<"New Value is "<<*b;
//
//    return 0;
}


