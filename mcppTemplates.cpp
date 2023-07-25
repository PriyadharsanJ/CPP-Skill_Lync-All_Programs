#include<iostream>
using namespace std;

template <typename T1, typename T2, typename ResultType>
ResultType addAndConvert(T1 a, T2 b)
{
    return static_cast<ResultType>(a+b);
}

int main(){
//    int num1 = 5, num2 = 7;

//Example 1

//    double result1 = addAndConvert<int, int, double>(num1, num2);
//    cout<<"Result 1 : "<<result1<<endl;

//Example 2
//    int intVal = 0;
//    float floatVal = 3.14;
//    int result2 = addAndConvert<int, float, int>(intVal, floatVal);
//    cout<<"Result 2 : "<<result2<<endl;

//Example 3

    string num1 = "20";
    string num2 =  "30";
    string result3 = addAndConvert<string, string, string>(num1, num2);
    cout<<"Result 3 : "<<result3<<endl;

     return 0;
}
