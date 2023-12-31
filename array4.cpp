//storing vowel letters by for each loop
#include<iostream>
using namespace std;
int main(){
    char vowel[5];
    for(char &element:vowel){
        cin>>element;

    }
    for(int element=0;element<5;element++){
        cout<<vowel[element]<<" ";
    }
    return 0;
}