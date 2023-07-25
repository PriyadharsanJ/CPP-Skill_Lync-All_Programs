#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

//void display(int i){
//    cout << i << " ";
//}

int main(){

//    vector<int> arr {3,4,2,8,5,1};
//
//    cout<< "Printing the vector\n";

//    for_each(arr.begin(), arr.end(), display);

//    for_each(arr.begin(), arr.end(), [](int i){cout<<i<<" ";});
//    cout<<"\n";

    //lambda specifier

    int a = 5;
    int b = 10;

//    auto fun = [a, &b]{return a + b;};

//modifying the [capture clause/lambda specifier]
    auto fun = [a, &b]()mutable{a=a++;return a + b;};
//    auto fun = [](int a,int b){return a + b;};



//    auto a = 100.;
//    auto b = 30;
//    auto fun = [](auto a, auto b){return a + b;};
    cout<<fun()<<endl;

    return 0;
}
