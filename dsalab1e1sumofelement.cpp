#include<iostream>
using namespace std;
int main(){
    int a[7];
    cout<<"Enter 7 elements of the array"<<endl;
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    int dummy=0;
    for(int i=0;i<7;i++){
        dummy = dummy+a[i];
    }
    cout<<"The sum of all elements of array is:"<<dummy;

    return 0;
}