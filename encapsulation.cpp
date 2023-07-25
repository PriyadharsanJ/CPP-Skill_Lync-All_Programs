#include <iostream>

using namespace std;

class Adder{
public:

    Adder(int i=0){
        total = i;
    }

    void addNum(int number){
        total+=number;
    }

    int getTotal(){
        return total;
    }

private:
    int total;
};



int main(){

    Adder a;
    a.addNum(10);
    cout << a.getTotal() << endl;

    return 0;
}
