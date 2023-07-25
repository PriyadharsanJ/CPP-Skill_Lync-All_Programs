#include <iostream>

using namespace std;

class Car{
    public:
    //int speed(int);
    //int speed();
    int speed(int maxSpeed){
        return maxSpeed*2;
    }

    int speed(){
        return 2000;
    }
};

int main(){
    Car myObj;
    cout<<myObj.speed(200)<<endl;
    cout<<myObj.speed()<<endl;
    return 0;
}
