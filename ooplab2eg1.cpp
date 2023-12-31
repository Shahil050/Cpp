#include<iostream>
using namespace std;
#include<math.h>
class vector{
    private:
        int x,y,z;
    public:
        void print();
        void read();
        vector add(vector);
        int length();
        vector(int,int,int);
        vector();
};
void vector::print(){
    cout<<x<<endl<<y<<endl<<z<<endl;
}
void vector::read(){
    cin>>x>>y>>z;
}
vector vector::add(vector b){
    vector c1;
    c1.x=x+b.x;
    c1.y=y+b.y;
    c1.z=z+b.z;
    return c1;
}
vector::vector(int p, int q,int r){
    x=p;
    y=q;
    z=r;
}
vector::vector(){
    x=0;
    y=0;
    z=0;
}
int vector::length(){
    int c;
    c=sqrt(x*x+y*y+z*z);
    return c;
}

int main(){
    vector i,j,k;
    cout<<"Enter vector a:"<<endl;
    i.read();
    cout<<"Enter vector b:"<<endl;
    j.read();
    cout<<"Your entered vector a is "<<endl;
    i.print();
    cout<<"Your entered vector b is "<<endl;
    j.print();
    cout<<"Sum of vector a and vector b is:";
    k=i.add(j);
    k.print();
    cout<<"Length of vector a is:";
    int a=i.length();
    cout<<a<<endl;
    vector f(2,3,4);
    f.print();
    return 0;
}