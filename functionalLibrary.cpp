#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v1 = {2,4,6,8,10};

    sort(v1.begin(),v1.end(),greater<int>());

    for(int i : v1){
        cout<<i<<endl;
    }
    return 0;
}
