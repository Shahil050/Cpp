#include<iostream>
using namespace std;
int main(){
    int n=5;
    int m=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==3||j==3||i==2||j==2||i==4||j==4){
                cout<<" ";
            }else(cout<<"*");
        }
        cout<<endl;
    }
    return 0;
}