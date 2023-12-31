//linear search
//finding the number in array
#include<iostream>
using namespace std;
int main(){
    int array[]={5,6,7,3,9};
    int key=3;
    int ans=-5;
    for(int i=0;i<5;i++){
        if(key==array[i]){
            ans=i;
        }
    }
    cout<<ans;
    return 0;

}