#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    cout<<sizeof(array)<<endl;
    //length of the array
    cout<<sizeof(array)/sizeof(array)[0]<<endl;


    cout<<endl;
    cout<<"dummy variable in array"<<endl;
    int array2[4];
    cout<<array2[0]<<endl;
    cout<<array2[1]<<endl;
    

    return 0;
}




