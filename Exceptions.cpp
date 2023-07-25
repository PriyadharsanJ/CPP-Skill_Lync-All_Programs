#include<iostream>
using namespace std;

//double division(int a, int b){
//    if(b==0){
//        throw "Division by Zero Condition!";
//    }
//    return (a/b);
//}
//
//int main(){
//    int x = 10, y = 0;
//    double z = 0;
//    try{
//        z = division(x,y);
//    }
//    catch(const char* msg){
//        cerr << msg << endl;
//    }
//    return 0;
//}

int main(){
    cout<<"Before Try\n";

    try{
        cin>>y;
        if(y<0){
            throw y;
            cout<<"After throw (Never Executed)\n";
        }
        else{
            throw 's';
        }
    }
    catchi(int z){
        cout<<"Exception caught - negative number \n";
        y = 87;
    }

    catch(char c){
        cout<<"Proceed";
    }

}
