#include<iostream>
#include<cassert>
using namespace std;
class Array{
    private:
    //int a=-1;
    int a[10];

    public:
        void read();
        void print();
        int Search(int);

};
void Array::read(){
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
}
void Array::print(){
    for(int i=0;i<5;i++){
        cout<<a[i];
        cout<<endl;
    }
    
}
int Array::Search(int data){
    int index=-1;
    for(int i=0;i<5;i++){
        if(a[i]==data){
            index=i;
            break;
        }
    }
    return index;
}
int main(){
    Array a1;
    cout<<"Elements of array:"<<endl;
    a1.read();
    cout<<"Enter element to Search in array"<<endl;
    int a,b;
    cin>>a;
    b=a1.Search(3);
    if(b==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found! Index is "<<b;
    }
    
    return 0;
}
