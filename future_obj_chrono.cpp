#include<iostream>
#include<future>
#include<thread>

using namespace std;
bool isodd(int x){
    if(x%2 != 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){

    int n = 6;

    future<bool> result = async(isodd,n);

    cout<<"Wait!\n";

    chrono::milliseconds span(500);

    while(result.wait_for(span) == future_status::timeout){
        cout<<".";
    }

    bool x = result.get();

    cout<<n<<(x?" is ":" is not ")<<"odd\n";

    return 0;
}

