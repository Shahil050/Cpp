//BUBBLE SHORT ALGORITHM
#include<iostream>
using namespace std;
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]; 
        cout<<"\t";
    }
    
}
void bubble(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]<a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int a[100],n;
    cout<<"Enter number of element:"<<endl;
    cin>>n;
    cout<<"Enter array of element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    print(a,n);
    cout<<endl;
    bubble(a,n);
    cout<<"After sorting:"<<endl;
    print(a,n);
    return 0;
}