#include<iostream>
using namespace std;
int sum(int n){
    if(n!=0){
        return n + sum(n-1);
    }
    return 0;
}
int main(){
    int a,result;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    result=sum(a);
    cout<<"Sum of number till "<<a<<" is "<<result;
    return 0;
}