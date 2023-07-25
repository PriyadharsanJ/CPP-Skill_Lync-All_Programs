
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

void myFunc1(int i){
    cout << i << " ";
}

void myFunc2(pair<char, int> p ){
    cout<< p.first << " - > " << p.second << endl;
}
int main(){

    int arr1[] = {1,2,3,4,5};

    vector<int> vec1(5);

    //copy
    //copy(arr1, arr1 + 5, vec1.begin());

    //copy_if
    copy_if(arr1, arr1 + 5, vec1.begin(),[](int i){return i>=3;});
    cout<<"Array Elements are : \n";

    for(int y : arr1){
       cout<<y<<endl;
    }

    cout<<"Vector Elements are : \n";

    for(int v : vec1){
       cout<<v<<endl;
    }


    return 0;
}










