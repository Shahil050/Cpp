#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b = a++;
    cout<<b<<endl<<a<<endl;;
    b = ++a;
    cout<<b<<endl<<a;
    return 0;

}