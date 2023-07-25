#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;

    pq.push(90);
    pq.push(70);
    pq.push(60);
    pq.push(100);
    pq.push(110);
    pq.emplace(150);


    //printing the elements

    cout<<"The elements are \n";

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }

    return 0;
}





