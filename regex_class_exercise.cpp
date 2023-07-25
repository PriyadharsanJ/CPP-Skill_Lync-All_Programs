#include<iostream>
#include<regex>
#include<string>
using namespace std;

int main(){
    string pwd;
    cout<<"Enter the password : ";
    cin>>pwd;

    regex pattern("^(?=.*[A-Za-z])(?=.*\\d)(?=.*[!@#$%^&*])[A-Za-z\\d!@#$%^&*]+{8,}$");

    if(regex_match(pwd, pattern)){
        cout<<"Password saved successfully!"<<endl;
    }
    else{
        cout<<"Password did not match the criteria!"<<endl;
    }

    return 0;
}

