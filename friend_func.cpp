#include <iostream>
using namespace std;

class Box{
private:
    int length;
    int width;

public:
    init(int a, int b){
        length = a;
        width = b;
    }
    friend int printArea(Box);
};

int printArea(Box arg){
cout<<arg.length*arg.width;
}

int main(){
    Box b;
    b.init(6,5);
    printArea(b);

    return 0;
}
