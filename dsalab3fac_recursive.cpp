#include<iostream>
using namespace std;
int fac(int a){
    if(a==0||a==1){
        return 1;
    }
    else
        return (a*fac(a-1));
    
}
int main(){
    int num,result;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    cout<<"Factorial of "<<num<<" is:";
    result=fac(num);
    cout<<result;

    return 0;
}