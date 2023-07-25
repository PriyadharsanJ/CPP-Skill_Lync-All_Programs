
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

int main(){

    vector<int> vec1{10,20,30,40,50,60,70};

    vector<int>::iterator p;

    cout<<"Initial Vector : \n";

    for( p = vec1.begin(); p < vec1.end(); p++){
        cout<<*p<<" ";
    }

    cout<<endl;
    cout<<"Rotating the elements from the 3 index : \n";

    rotate(vec1.begin(), vec1.begin() + 3, vec1.end());

    for( p = vec1.begin(); p < vec1.end(); p++){
        cout<<*p<<" ";
    }
    cout<<endl;
    return 0;
}











