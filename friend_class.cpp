#include<iostream>
using namespace std;

class Base{
private:
    Base(){
        cout<<"Base Class constructor\n";
    }
    friend class BaseFrnd;
};

class BaseFrnd{
public:
    BaseFrnd(){
        Base ob;
        cout<<"BaseFrnd class constructor\n";
    }
};


int main(){

    BaseFrnd ob2;

    return 0;
}


