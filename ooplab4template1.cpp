#include<iostream>
using namespace std;

template<class T>
class Array{
    private:
    //int a=-1;
    T a[10];

    public:
        void read();
        void print();
        int Search(T);

};
template<class T>
void Array<T>::read(){
    for(int i=0;i<5;i++){
        cin>>a[i];
    }

}
template<class T>
void Array<T>::print(){
    for(int i=0;i<5;i++){
        cout<<a[i];
        cout<<endl;
    }
    
}
template<class T>
int Array<T>::Search(T n){
    int index=-1;
    for(int i=0;i<5;i++){
        if(a[i]==n){
            index=i;
            break;
        }
    }
    return index;
}

int main(){
    Array<int> a1;
    cout<<"Elements of array:"<<endl;
    a1.read();
    cout<<"Enter element to Search in array"<<endl;
    int a,b;
    cin>>a;
    b=a1.Search(a);
    if(b==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found! Index is "<<b;
    }
    
    return 0;
}