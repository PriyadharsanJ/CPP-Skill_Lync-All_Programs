#include<iostream>
#include<memory>

using namespace std;

int main(){
    shared_ptr<string> p1 = make_shared<string>();

    *p1 = "Modern C++\n";

    cout<<"p1 count = "<<p1.use_count()<<endl;
    //scope
    //{
    shared_ptr<string> p2(p1);

    cout<<"p2 is pointing to the same object as p1 : "<<endl;

    cout<<"p2 count = " << p2.use_count() << endl;
    //}
    //resetting p2
    //p2.reset();
    cout<<"p1 count = " << p1.use_count() << endl;

    return 0;
}

