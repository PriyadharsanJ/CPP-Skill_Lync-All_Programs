#include<iostream>
#include<algorithm>
#include<array>
using namespace std;

int main(){

    array<int,5> arr;
    cout<<"Enter 5 elements : \n";

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    cout<<"The array elements are - \n";

    for(auto a : arr){
        cout<<a<<endl;
    }

    //sorting
//    sort(arr.begin(),arr.end());


    cout<<"Enter the position to insert - \n";
    cin >> pos;

    cout<<"Enter the element to insert - \n";
    cin >> x;

    v.insert(v.begin()+pos,x);

    cout<<"The array elements after sorting are - \n";

    for(auto a : arr){
        cout<<a<<endl;
    }


}
