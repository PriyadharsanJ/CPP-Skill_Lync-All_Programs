#include<iostream>
using namespace std;

//void display(){}

void sum(){}



//void display(d first, Args...args)
//{
//    cout<<first<<"\n";
//    display(args...);
//}

auto s = 0;
template <typename d, typename...Args>
void sum(d first,Args...args){
    s=s+first;
    sum(args...);
}

int main(){
//    display(1,2,3,"PD","Trades","Algora",28,0.3,2002);
    sum(28,3,2002);
    cout<<s<<endl;
    return 0;
}
