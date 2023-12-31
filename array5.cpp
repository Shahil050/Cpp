//calculate the sum of given numbers in array
#include<iostream>
using namespace std;
int main(){
    int array[]={4,8,3,5};
    int size=sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int idx=0;idx<size;idx++){
        sum+=array[idx];
    }
    cout<<sum<<endl;
    return 0;

}