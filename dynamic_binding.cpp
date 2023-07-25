






#include<iostream>
using namespace std;
//
//class A{
//public:
//    void closing_print(){
//        display();
//    }
//
//    virtual void display(){
//        cout<<"The Base class function is called"<<endl;
//    }8
//};
//
//class B : public A{
//public:
//    virtual void display(){
//        cout<<"The derived class function is called"<<endl;
//    }
//};
//
//int main(){
//    A ob1;
//    ob1.closing_print();
//    B ob2;
//    ob2.closing_print();
//    return 0;
//}

class A{
public:
    virtual void display(){
        cout<<"The Base class function is called"<<endl;
    }
};

class B : public A{
public:
    void display() override{
        cout<<"The derived class function is called"<<endl;
    }
};

int main(){


    return 0;
}


