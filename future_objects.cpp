#include<iostream>
#include<future>
#include<thread>

using namespace std;

int main(){

    long int counter = 0;
    future<int> result = async(launch::async, [](){return 8;});
    cout<<"Waiting...\n";

    for(long int i=0; i<500000; i++){counter++;}
    cout<<"Counter : "<<counter<<endl;
    result.wait();
    cout<<"Final Result "<<result.get()<<endl;
    return 0;
}
