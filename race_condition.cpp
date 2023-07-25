#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
using namespace std;

mutex m;
condition_variable cv;

bool ready = false;
void waitForSignal(int n){
    unique_lock<mutex> lock(m);
    cv.wait(lock, []{return ready;});
    cout<<n<<" ";
    cout<<"Received signal, continuing execution.\n"<<endl;
}

int main(){

    cout<<"Main Thread started!\n";
    //thread worker(waitForSignal);
    thread worker1(waitForSignal, 1);
    thread worker2(waitForSignal, 0);

    this_thread::sleep_for(chrono::seconds(2));

    {
        lock_guard<mutex> lock(m);
        ready = true;
    }

    cv.notify_one();
    worker1.join();
    worker2.join();

    cout<<"Main thread finished.\n";

    return 0;
}
