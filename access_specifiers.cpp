#include <iostream>
using namespace std;

class accSpec{
private:
    int y;
public:
    int x;
void setValue(){
    y = 69;
}

void getValue(){
    cout<<y;
}
};
int main(){
    accSpec ob1;
    ob1.x=100;
    //ob1.y=20;
    ob1.setValue();
    ob1.getValue();
    return 0;
}
