// WAP to print sum of n numbers using for loop
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int sum=0;

    for(int i=1;i<=a;i++){
        sum+=i;

    }
    cout<<sum<<endl;
    return 0;
}