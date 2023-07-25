#include<iostream>
#include<fstream>
using namespace std;
//
//int main(){
//    ofstream MyFile("filename.txt");
//
//    MyFile << "PD Trades\n";
//
//    MyFile.close();
//}


int main(){
    fstream newfile;
    newfile.open("tpoint.txt",ios::out);
    if(newfile.is_open()){
        newfile<<"Embitel Technologies, A CARIAD group company.";
        newfile.close();
    }
    newfile.open("tpoint.txt",ios::in);
    if(newfile.is_open()){
        string tp;
        while(getline(newfile, tp)){
            cout<< tp << "\n";
        }
        newfile.close();
    }
}

