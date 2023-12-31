#include<iostream>
using namespace std;
void add(int i,int j){
    int sum=i+j;
    cout<<sum;
}
int main(){
    int a,b;
    cout<<"Enter a=";
     cin>>a;
    cout<<"Enter b=";
    cin>>b;
    add(a,b);
    return 0;
}