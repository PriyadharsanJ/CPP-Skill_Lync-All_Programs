#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {2,4,6};

    sort(arr,arr+3);

    int count = 1;

    cout<<"Permutations : \n";

    do{
        cout<<"Permutation"<<count<<":";

        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

        count++;

    }while(next_permutation(arr, arr+3));

    return 0;

}
