//WAP to print the first multiple of 5 that is also divisible by 7
#include<iostream>
using namespace std;
int main(){
    for(int i=5;;i+=5){
    if(i%7==0){
        cout<<i<<endl;
        break;
    }
}
return 0;

}

// error