//finding smallest(min) number in array
#include<iostream>
using namespace std;
int main(){
    int array[]={5,9,2,1};
    int min=array[0];
    for(int i=1;i<4;i++){
        if(min>array[i]){
            min=array[i];
        }
    }
    cout<<min;
    return 0;
}