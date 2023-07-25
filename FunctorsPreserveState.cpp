#include<iostream>
using namespace std;

class FunctorsPreserveState{

private:
    int num;

public:
    FunctorsPreserveState(int x) : num(x) {}

    int operator()(int y){
        return num + y;
    }

};

int main(){
    FunctorsPreserveState fps(10);
//    fps(10);

    cout<<fps(5)<<endl;
    cout<<fps(20)<<endl;

    return 0;
}
