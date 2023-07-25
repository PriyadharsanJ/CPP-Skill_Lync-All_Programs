
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

    vector<int> arr {3,4,2,8,5,1};

    map<char, int> myMap;

    myMap['a'] = 3;
    myMap['c'] = 3;
    myMap['b'] = 6;

    cout<< "Printing the vector\n";

    for_each(arr.begin(), arr.end(), myFunc1);
    cout<<"\n";

    cout<<"Printing the map\n";
    for_each(myMap.begin(), myMap.end(), myFunc2);


    return 0;
}









