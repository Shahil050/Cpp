//printing the max variable in array
#include<iostream>
using namespace std;
int main(){
    int array[]={1,199,56,34,2};
    int max=array[0];
    for(int i=1;i<5;i++){
        if(array[i]>max){
            max=array[i];
        }
        
    }
    cout<<max;
    return 0;
}