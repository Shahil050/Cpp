#include<iostream>
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
        vector sum(vector);
        int length();
};
// int vector::length(){
//     int c;
//     c=sqrt(x*x+y*y+z*z);
//     return c;
// }
vector vector::sum(vector b){
   vector temp=*new vector[dimension];
   for(int i=0;i<dimension;i++){
    temp.num[i]=num[i]+b.num[i];
   }
   return temp;

}
void vector::set_dim(int b){
    dimension=b;
}
vector::vector(int num1){
    num=new float[num1];//parametric constructor
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
    vector a(10),b(10),add(10);
    int n1,n2;
    cout<<"Enter number of dimension of vector a"<<endl;
    cin>>n1;
    a.set_dim(n1);//manually setting dimension to 3
    a.read();
    cout<<"The required vector are "<<endl;
    a.print();
    cout<<endl<<endl;


    cout<<"Enter number of dimension of vector b"<<endl;
    cin>>n2;
    a.set_dim(n2);//manually setting dimension to 3
    a.read();
    cout<<"The required vector are "<<endl;
    a.print();
    cout<<endl<<endl;

    cout<<"The sum of Vector a and b is "<<endl;
    *add=a.sum(b);
    (*add).print();
    delete add;

    return 0;
}