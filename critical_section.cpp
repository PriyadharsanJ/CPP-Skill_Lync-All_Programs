#include<iostream>
#include<thread>
#include<bits/stdc++.h>

using namespace std;
//int y=0;
static long int counter = 0;

//void function_CriticalSection(){
//    y = 2;
//    y = y+1;
//}

void thread_fun(){
    for(long int j=0; j<1000000; j++){
        counter++;
    }
}

int main(){
//    thread t1(function_CriticalSection);
//    thread t2(function_CriticalSection);

//    t1.join();
//    t2.join();
//
//    cout<<"Values of y:\n"<<y<<endl;


//    cout<<"Values of y:\n"<<y<<endl;
//    t2.join();

    thread friends[5];
    for(int i = 0; i<5 ; i++){
        friends[i] = thread(thread_fun);
    }

    for(int i = 0; i<5 ; i++){
        friends[i].join();
    }

    cout<<counter<<endl;

    return 0;

}
