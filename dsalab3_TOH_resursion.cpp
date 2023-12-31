#include<iostream>
using namespace std;
void toh(int n,char beg,char aux,char end){
    if(n<=0){
        cout<<"Invalid";
    }
    else if(n==1){
        cout<<"\n move disk from "<<beg<<" to "<<end;
    }
    else{
        toh(n-1,beg,end,aux);
        toh(1,beg,aux,end);
        toh(n-1,aux,beg,end);
    }
}
int main(){
    int n;
    char a,b,c;
    cout<<"Enter number of disks:"<<endl;
    cin>>n;
    cout<<"Tower of hanoi of "<<n<<" disk is:"<<endl;
    toh(n,'a','b','c');
}