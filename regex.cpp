#include<iostream>
#include<regex>
#include<string>
using namespace std;

int main(){
//1
//    string s = "PD asdnkasjsd PDasd PD sasdPD smn PD";
//
//    regex pattern("PD");
//
//    if(regex_search(s,pattern)){
//        cout<<"Found 'PD'!"<<endl;
//    }
//    else{
//        cout<<"Not Found!"<<endl;
//    }
//2
/*
    string fnames[] = {"abc.txt", "ABC.txt", "Abc.txt", "abc","abc1.txt",".txt"};

    regex pattern("[a-z]+[0-9]*\\.txt");

    for(const auto &fname : fnames){
        cout<<fname<<" : "<<regex_match(fname, pattern)<<endl;
    }
*/
//3

    string input = "There are 10 apples and 5 oranges on the table";\

    regex pattern("\\b\\d+\\b");

    sregex_iterator it(input.begin(), input.end(), pattern);
    sregex_iterator end;

    cout<<"Numbers in the input string : ";
    while(it!=end){
        cout<<it->str()<<" ";
        ++it;
    }

    cout<<endl;

    return 0;
}
