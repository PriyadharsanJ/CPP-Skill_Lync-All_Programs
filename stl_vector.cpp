#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    int e,s,pos,x;
    cout<<"Enter the size of the vector : \n";
    cin>>s;
    cout<<"Enter the elements of the vector : \n";
    for(int i=0;i<s;i++){
        cin>>e;
        v.push_back(e);
    }

    cout<<"The vector elements are - \n";

    for(auto ele : v){
        cout<<ele<<endl;
    }
    cout<<"Enter the position to insert - \n";
    cin >> pos;

    cout<<"Enter the element to insert - \n";
    cin >> x;

    v.insert(v.begin()+pos,x);
    //sorting

//     sort(v.begin(),v.end());
//
//    cout<<"The vector elements after sorting are - \n";

    cout<<"The vector elements after inserting are - \n";

    for(auto ele : v){
        cout<<ele<<endl;
    }
}

