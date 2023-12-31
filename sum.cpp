//WAP to add the total number of given digits
#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter a number: ";
    cin>>i;
    int sum = 0;
    while(i>0){
        int last_digit = i%10;
        sum += last_digit;
        i/=10;

    }
    cout<<sum;
    return 0;
}