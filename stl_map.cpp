#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){

    map<int,string> m{{1,"Priyadharsan"},{2, "Andrew Tate"},{3, "Tristan Tate"}};

    map<int,string>::iterator it;

    //printing the elements

    cout<<"The keys are \n";

    for(it = m.begin(); it!=m.end(); it++){
        cout<< it->second << endl;

    }

    return 0;
}







