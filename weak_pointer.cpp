#include<iostream>
#include<memory>

using namespace std;

int main(){
    shared_ptr<int> shrd_ptr_1(new int(8));
    weak_ptr<int> wk_ptr(shrd_ptr_1);

    cout<<"count the number of weak ptr : "<<wk_ptr.use_count()<<endl;

    shared_ptr<int> shrd_ptr_2(shrd_ptr_1);
    cout<<"count the number of weak ptr : "<<wk_ptr.use_count()<<endl;

    return 0;

}
