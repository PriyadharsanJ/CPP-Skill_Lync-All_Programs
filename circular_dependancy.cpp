#include<iostream>
#include<memory>

using namespace std;

class Vegetable;
class Fruit;


class Fruit{
public:
    shared_ptr<Vegetable> veg;

    ~Fruit(){
        cout<<"Fruit was destroyed\n";
    }
};

class Vegetable{
public:
    shared_ptr<Fruit> fru;

    ~Vegetable(){
        cout<<"Vegetable was destroyed\n";
    }
};




int main(){

    shared_ptr<Fruit> apple = make_shared<Fruit>();
    cout<<apple.use_count()<<endl;

    shared_ptr<Vegetable> potato = make_shared<Vegetable>();
    cout<<potato.use_count()<<endl;

    apple->veg = potato;
    cout<<apple.use_count()<<endl;

    potato->fru=apple;
    cout<<potato.use_count()<<endl;

    return 0;
}

