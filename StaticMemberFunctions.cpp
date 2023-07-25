#include<iostream>
#include<math.h>
using namespace std;

class Student{
    static int num;
public:
    static int getRoll();
};

int Student::num=0;
int Student::getRoll(){return num++;}


int main(){
    for(int i=0;i<5;i++){
        cout<<"Student = "<<Student::getRoll()<<endl;
    }

    return 0;
}





