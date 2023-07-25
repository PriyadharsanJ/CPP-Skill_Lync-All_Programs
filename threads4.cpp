#include<iostream>
#include<thread>
#include<bits/stdc++.h>

using namespace std;

void thread_fun(){
    cout<<"Thread"<<this_thread::get_id()<<" is running.\n";
}

int main(){
    thread friends[5];

    for(int i = 0; i<10 ; i++){
        friends[i] = thread(thread_fun);
    }
    for(int i = 0; i<10 ; i++){
        cout<<friends[i].get_id()<<endl;
    }
    for(int i = 0; i<10 ; i++){
        friends[i].join();
    }



    cout<<"All threads completed!\n";

    return 0;

}



