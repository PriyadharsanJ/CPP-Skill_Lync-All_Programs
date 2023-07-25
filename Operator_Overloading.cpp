#include<iostream>
using namespace std;

class ComplexNumbers{
public:
    int imaginary;
    int real;

    ComplexNumbers(int i, int j){
        imaginary = i;
        real = j;
    }

    void print() { cout << real << " + i" << imaginary << endl;};

    ComplexNumbers operator==(ComplexNumbers c){
        ComplexNumbers c4(0,0);

        c4.real = this->real + c.real;
        c4.imaginary = this->imaginary + c.imaginary;

        return c4;
    }
};

int main(){
    ComplexNumbers c1(5,10);
    ComplexNumbers c2(10,20);
    c1.print();
    cout<<"\n";
    c2.print();
    cout<<"\n";
    ComplexNumbers c3 = c1 == c2;
    c3.print();
    return 0;
}
