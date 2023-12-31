#include<iostream>
using namespace std;
class vector{
    private:
        int x,y,z;

    public:
        friend vector operator +(vector,vector);
        friend vector operator -(vector,vector);
        friend istream& operator>>(istream&,vector&);
        friend ostream& operator<<(ostream&,vector&);
        friend vector operator-(vector);
        friend int operator *(vector,vector);
};
int operator *(vector a,vector b){
    int temp,s1;
    return a.x*b.x+a.y*b.y+a.z*b.z;
}

vector operator +(vector a,vector b){
    vector temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    temp.z=a.z+b.z;
    return temp;
}
vector operator -(vector a,vector b){
    vector temp;
    temp.x=a.x-b.x;
    temp.y=a.y-b.y;
    temp.z=a.z-b.z;
    return temp;
}
vector operator -(vector a){
    vector temp;
    temp.x=-a.x;
    temp.y=-a.y;
    temp.z=-a.z;
    return temp;
}
istream&operator>>(istream&in,vector&a){
    in>>a.x;
    in>>a.y;
    in>>a.z;
    return in;
}
ostream&operator<<(ostream&out,vector&a){
    out<<a.x<<" ";
    out<<a.y<<" ";
    out<<a.z<<" ";
    return out;
}
int main(){
    vector v1,v2,result1,result2,neg;
    cout<<"Enter component of vector a:"<<endl;
    cin>>v1;
    cout<<"Enter component of vector b:"<<endl;
    cin>>v2;
    cout<<"The sum of vector a and b is: ";
    result1=v1+v2;
    cout<<result1;
    cout<<"\nThe subtraction of a and vector b is ";
    result2=v1-v2;
    cout<<result2;
    cout<<"\nThe negative of vector a is ";
    neg=-v1;
    cout<<neg;
    cout<<"\nThe dot product of v1 and v2 is ";
    int b1=v1*v2;
    cout<<b1;
    return 0;
}
