#include<iostream>
#include<vector>
#include<list>
#include<thread>
#include<mutex>

using namespace std;
mutex m;

list<int> flist;

void addList(int max, int invl){
    m.lock();
    for(int i = 1; i<=max; i=i+invl){
        flist.insert(flist.end(),i);
    }

    //LOGIC - 2
    /*
    for(int i = 0; i<=max; i++){
        if(i%invl==0){
            flist.insert(flist.end(),i);
        }
    }

    */
    m.unlock();
}

void display(){
    //Not Mandatory
    //lock_guard<mutex> guard(m);
    for(int i : flist){
        cout<<i<<" ";
    }
}


int main(){
    thread t1(addList,100,1);
    thread t2(addList, 100, 10);
    thread t3(display);

    t1.join();
    t2.join();
    t3.join();
    return 0;
}
