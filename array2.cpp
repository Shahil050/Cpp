#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6};
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;
    int size=sizeof(array)/sizeof(array[0]);
    for(int index=0;index<size;index++){
        cout<<array[index]<<endl;
    }

    return 0;

}