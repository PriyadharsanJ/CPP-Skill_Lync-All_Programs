
#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

mutex m;

int y = 0;

void thread_fun(){
        lock_guard<mutex> guard(m);
        cout<<"Thread X "<<endl;
        int x = 50;
        //y = 2;
        int c = x/y;
        cout<<"Value of C : "<<c<<endl;;
        //m.unlock();
}

int main(){

    thread th1(thread_fun);
    thread th2(thread_fun);
    th1.join();
    th2.join();
    cout<<"main fn!"<<endl;
    return 0;
}

