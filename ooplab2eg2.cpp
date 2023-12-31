#include<iostream>
#include<cassert>
using namespace std;
class vector {
    private:
        float *num;
        int dimension;

    public:
        vector(int n);
        vector();
        ~vector();//for destructor function call
        void read();
        void print();
        void set_dim(int);
        vector add(vector);
        int length();
};
// int vector::length(){
//     int c;
//     c=sqrt(x*x+y*y+z*z);
//     return c;
// }
vector vector::add(vector b){
    assert(dimension== b.dimension);
    vector c1(dimension);
    for(int i=0;i<dimension;i++){
        c1.num[i]=b.num[i]+num[i];
    }
    return c1;
   
}

void vector::set_dim(int b){
    dimension=b;
}
vector::vector(int num1){
    dimension=num1;
    num=new float[dimension];//parametric constructor
}
vector::vector(){//default constructor
    num=new float[dimension=3];//setting default value to 3 for x,y,z
}
vector::~vector(){
    delete[]num;
}
void vector::read(){
    for(int i=0;i<dimension;i++){
        cin>>num[i];
    }
}
void vector::print(){
    for(int i=0;i<dimension;i++){
        cout<<num[i]<<endl;
    }
}
int main(){
    vector a(3),b(3),sum(3);// initializing vector with total dimension
    int n1,n2;
    // cout<<"Enter number of dimension of vector a"<<endl;
    // cin>>n1;
    //a.set_dim(n1);//manually setting dimension to 3
    a.read();
    cout<<"The required vector are "<<endl;
    a.print();
    cout<<endl<<endl;


    // cout<<"Enter number of dimension of vector b"<<endl;
    // cin>>n2;
    //a.set_dim(n2);//manually setting dimension to 3
    a.read();
    cout<<"The required vector are "<<endl;
    a.print();
    cout<<endl<<endl;

    cout<<"The sum of Vector a and b is "<<endl;
    sum=a.add(b);
    sum.print();


    // //checking parameter work
    // vector c(10);
    // c.read();
    // c.print();// checked

    

    return 0;
}