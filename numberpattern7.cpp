#include<iostream>
using namespace std;
int main(){
    int n,j;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            
         cout<<i;
        }
        for(j=i-1;j>=1;j--){
            cout<<i;
        }
        
        cout<<endl;
    }
    return 0; 

}
    
