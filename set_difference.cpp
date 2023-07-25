#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> vec1{5,4,3,2,1};

    vector<int> vec2{7,6,5,4,3};

    vector<int> res(6);

    vector<int>::iterator v1,v2,v3;

    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());

    v3 = set_difference(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), res.begin());

    cout<<"Vector 1\n"<<endl;
    for(v1 = vec1.begin(); v1<vec1.end(); v1++){
        cout<<*v1<<" ";
    }
    cout<<endl;
    cout<<"Vector 2\n"<<endl;
    for(v2 = vec2.begin(); v2<vec2.end(); v2++){
        cout<<*v2<<" ";
    }
    cout<<endl;

    cout<<"Vector 3\n"<<endl;
    for(v3 = res.begin(); v3<res.end(); v3++){
        cout<<*v3<<" ";
    }
    cout<<endl;

    return 0;

}

