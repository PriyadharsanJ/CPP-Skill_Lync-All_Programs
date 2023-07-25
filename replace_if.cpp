
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool isodd(int y){
    if(y%2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){

    vector<int> vec{7,6,5,4,3,2,1};

    cout<<"Before Replacing : \n";

    for(int x:vec){
        cout<<x<< " ";
    }
    cout<<endl;

    replace_if(vec.begin(), vec.end(), isodd, 10);

    cout<<"After replacing : \n";

    for(int x:vec){
        cout<<x<< " ";
    }
    cout<<endl;


    return 0;
}











