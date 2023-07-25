#include<iostream>
#include<thread>
#include<bits/stdc++.h>

using namespace std;

void fun(){
    cout<<"I am the callable function of thread.";
}

int main(){
    thread th(&fun);

    cout<<"I am in Main Thread\n";

    th.join();
    return 0;



}
