#include<iostream>
#include<thread>
#include<bits/stdc++.h>

using namespace std;

void thread_fun(int *id){
    cout<<"Thread"<<*id<<" is running.\n";
}

int main(){
    thread friends[5];

    for(int i = 0; i<10 ; i++){
        friends[i] = thread(thread_fun, &i);
    }
    for(int i = 0; i<10 ; i++){
        friends[i].join();
    }


    cout<<"All threads completed!\n";

    return 0;

}


