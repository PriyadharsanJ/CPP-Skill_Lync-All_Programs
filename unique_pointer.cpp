#include<iostream>
#include<memory>
using namespace std;

class ABC{
public:
    string Name;
    ABC(string n){
        Name = n;
    }
};

int main(){

    auto p = make_unique<ABC>("Modern C++");

    cout<<"Memory address of p is:\n";

    cout<<p.get()<<endl;

    cout<<p->Name<<endl;

    p = make_unique<ABC>("C++");

    cout<<"Memory address of p is :\n";
    cout<<p.get()<<endl;
    cout<<p->Name<<endl;

    return 0;

}
