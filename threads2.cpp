#include<iostream>
#include<thread>
#include<bits/stdc++.h>

using namespace std;

void thread_fun(int id){
    cout<<"Thread"<<id<<" is running."<<endl;
}

int main(){
    thread th1(thread_fun, 1);
    thread th2(thread_fun, 2);

    th1.join();
    th2.join();

    cout<<"All threads completed!\n";

    return 0;

}

