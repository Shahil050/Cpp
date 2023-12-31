// WAP to find the total number of digits 
#include<iostream>
using namespace std;
int main(){
    int i,digits = 0;
    cout<<"Enter a number: ";
    cin>>i;
    while(i>0){
        digits++;
        i=i/10;
    }
    cout<<digits<<endl;
    return 0;
}