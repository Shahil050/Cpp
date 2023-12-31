#include<iostream>
using namespace std;
void fibo(int n){
    static int a=0,b=1,c;
    if(n>0){
        c=a+b;
        cout<<"\t"<<c<<"\t";
        a=b;
        b=c;
        fibo(n-1);
    }
}
int main(){
    int n,a=0,b=1;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<a<<"\t"<<b<<"\t";
    fibo(n-2);
    
    return 0;
}