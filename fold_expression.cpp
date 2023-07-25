#include<iostream>
using namespace std;

template <typename...T>
auto sum(T...t)
{
    return (t+...);
}

template<typename...Args>
auto sum1(Args...args){
    return(args+...+0);
}


int main(){
    int result = sum(1,2,3,4,5);
    int result1 = sum1(10,20,30,40,50);
    cout<<result<<endl;
    cout<<result1<<endl;
    return 0;
}
