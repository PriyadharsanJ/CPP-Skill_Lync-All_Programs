#include<iostream>
using namespace std;


//Function templates
//template <class T>
//T GetMax (T a, T b)
//{
//    T result;
//    result = (a>b) ? a : b;
//    return (result);
//}
//
//int main(){
//    int i=5, j=6, k;
//    long l=10, m=5, n;
//    k = GetMax<int>(i,j);
//    n=GetMax<long>(l,m);
//    cout << k << endl << n << endl;
//     return 0;
//}



//Class templates

template<class T>
class mypair{
    T a,b;
public:
    mypair (T first, T second){
        a = first;
        b =second;
    }
    T getmax();
};


template<class T>
T mypair<T>::getmax(){
    T retval;
    retval = a>b ? a : b;
    return retval;
}
int main(){
    mypair <int> myobject (100,75);
    cout << myobject.getmax();
    return 0;
}
