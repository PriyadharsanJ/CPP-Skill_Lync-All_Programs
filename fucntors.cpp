#include<iostream>
using namespace std;

class FunctorCreator{

    public:
//    int operator()(){
//        cout<<"Operation Successful!";
//    }
//    int operator()(int x){
//        return(x*x);
//    }

//multiple arguments
    int operator()(int a, int b){
        return a+b;
    }

};


int main(){

    FunctorCreator functor;
    cout<<functor(4,5);
    return 0;
}

