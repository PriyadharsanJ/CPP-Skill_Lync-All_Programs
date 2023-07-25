#include <iostream>
using namespace std;

class Vehicle{
protected:
    string brand = "Porsche";
public:
    void honk(){
        cout<<"pom pom\n";
    }
};

class Car: public Vehicle{
public:
    string model = "GT3 RS\n";

    void display(){
        cout<<"Car <3\n";
        cout<<"Brand : "<<brand<<endl;
        cout<<"Model : "<<model<<endl;
    }

    void brand_get(){
        cin>>brand;
    }
};
int main(){

    Car c;

    c.honk();
    c.display();
    c.brand_get();


    return 0;
}
