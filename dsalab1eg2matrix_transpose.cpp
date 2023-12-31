#include<iostream>
using namespace std;
int main(){
    int a[100][100],t[100][100],m,n;
    cout<<"Enter rows and columns of matrix"<<endl;
    cin>>m>>n;
    cout<<"Enter "<<m*n<<" element of matrix"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Your entered matrix is ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"Transpose of given matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[j][i];
        }
        cout<<endl;
    }
    return 0;
}