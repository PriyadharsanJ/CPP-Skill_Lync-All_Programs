#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(90);
    q.push(70);
    q.push(60);

    //printing the elements

    cout<<"The elements are \n";

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}




