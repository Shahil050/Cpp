/* program to find the sum of positive numbers 
If the user enters a negative number, the loop ends 
the negative number is not added to the sum*/

#include<iostream>
using namespace std;
int main(){
    int num;
    int sum = 0;
    do {
        sum += num;
        cout<<"Enter a number: ";
        cin>>num;

    } while (num >= 0);
    cout<<"\nThe sum is "<<sum<<endl;
    return 0;
}
// Error