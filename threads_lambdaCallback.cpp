#include<iostream>
#include<thread>
#include<bits/stdc++.h>

using namespace std;

int main(){
    thread th([]{for(int i=0; i<5; i++){cout<<i<<"Lambda expression as a call back function\n";}});

    cout<<"Main Thread!\n";

    th.join();

    return 0;

}



