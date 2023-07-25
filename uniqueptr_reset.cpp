#include<iostream>
#include<memory>

using namespace std;

int main(){
    auto p = make_unique<int>();

    cout<<p.get()<<endl;

    auto q=move(p);
    cout<<q.get()<<endl;
    cout<<p.get()<<endl;
    return 0;
}
