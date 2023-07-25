#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    try{
        arr[6] = 100;
//        int index = 1;
//        int value = numbers.at(index);
//
//
//        cout<<"Value at index"<<index<<": "<<value<<endl;
    }

    catch(const out_of_range& ex){
        cout<<"Exception caught : "<<ex.what()<<endl;

    }
    catch(const exception& ex){
        cout<<"Standard exception caught : "<<ex.what()<<endl;
    }
    catch(...){
        cout<<"Unknown exception caught : "<<endl;
    }

    return 0;
}
