#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    set<int> s;

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

    return 0;
}






