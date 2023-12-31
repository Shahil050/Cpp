#include<iostream>
using namespace std;
int main(){
    int m,n,sum=0;
    int a[3][2],b[2][4],result[3][4];
    cout<<"Enter first matrix"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
           cout<<"Enter "<<i<<j<<" elements of your matrix"<<endl;
           cin>>a[i][j];
        }
    }
    cout<<"Enter second matrix"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
           cout<<"Enter "<<i<<j<<" elements of your matrix"<<endl;
           cin>>b[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
           for(int k=0;k<2;k++){
            sum += a[i][k]*b[k][j];
           }
           result[i][j]=sum;
           sum=0;
        }
    }
    cout<<"Your resultant matrix is :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<result[i][j];
        }
        cout<<endl;
        
    }
    return 0;
}