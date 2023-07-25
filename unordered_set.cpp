#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;

int main(){

    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(2);


    //printing the elements

    cout<<"The elements are \n";

    for(auto ele : s){
        cout<< ele << endl;

    }


    auto it = s.find(1);
    cout<<"IT - "<<*it<<endl;
    cout<<"Finding : 2\n";


    //finding
    if(s.find(2)!=s.end()){
        cout<<"yes\n";
    }
    else{
        cout<<"No\n";
    }

    return 0;
}









