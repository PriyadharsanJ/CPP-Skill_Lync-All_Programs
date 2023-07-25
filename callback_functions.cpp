#include<iostream>

using namespace std;

float sum(float val1, float val2){
    return val1+val2;
}

void display(float (*funptr) (float, float))
{
    float s = funptr(25.3, 12.5);
    cout<<s<<endl;
}

int main(){
    float (*fun) (float, float);

    fun = sum;

    display(fun);
}


