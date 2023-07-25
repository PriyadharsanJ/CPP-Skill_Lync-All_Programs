#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

int main(){
    list<int> l {1,2,3,4,5};

    list<int>::iterator it;

    it = l.insert(l.begin(),45);

    l.push_back(10);

    l.push_front(20);

    for(auto ele : l){
        cout<<ele<<endl;
    }

    return 0;
}


