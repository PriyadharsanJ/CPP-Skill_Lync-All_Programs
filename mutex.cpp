#include<iostream>
#include<thread>
#include<mutex>
#include<atomic>
using namespace std;

//ATOMIC
atomic<int> counter(0);

//Normal
//static long int counter = 0;
mutex m;

void thread_fun(){
    for(long int j=0; j<1000000; j++){
        m.lock();
        counter++;
        m.unlock();
    }
}

int main(){

    thread friends[5];
    for(int i = 0; i<5 ; i++){
        friends[i] = thread(thread_fun);
    }

    for(int i = 0; i<5 ; i++){
        friends[i].join();
    }

    cout<<counter<<endl;

    return 0;
    return 0;
}
