#include<iostream>
#include<future>
#include<thread>

using namespace std;
int slowOperation(){
    this_thread::sleep_for(chrono::seconds(5));
    return 10;
}
int main(){

    future<int> f = async(slowOperation);

    //this_thread::sleep_for(chrono::seconds(10));

    future_status status;

    do{
        status = f.wait_for(chrono::seconds(1));
        if(status == future_status::timeout){
            cout<<"Waiting!"<<endl;
        }
    }while(status!=future_status::ready);

    cout<<"Future result : "<<f.get()<<endl;

    return 0;
}


