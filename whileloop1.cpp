//WAP to add n numbers using while loop
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int sum=0;
    int i=1;
    while(i<=a){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}