#include<iostream>
using namespace std;
#include<math.h>
int main(void){
    int n,i,j,k;
    float a[10][10],x[10],y[10],r;
    cout<<"Enter the order of matrix:- ";
    cin>>n;
    cout<<"Enter the elements of matrix";
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    y[i]=1
    for(i=2;i<=n;i++){
        y[i]=0;
    }
    h:for(i=1;i<=n;i++){
        x[i]=y[i];
    }
    for(i=1;i<=n;i++){
        y[i]=0;
    for(j=1;j<=n;j++){
        y[i]=y[i]+a[i][j]*x[j];
    }}
    r=y[i];

}