#include<iostream>
#include<cassert>
using namespace std;
class listofstudent{
    private:
        string *name;
        int length;
        float *marks;
    
    public:
        listofstudent(int);
        listofstudent(const listofstudent&);
        // friend listofstudent operator =();
        friend istream& operator>>(istream&,listofstudent&);
        friend ostream& operator<<(ostream&,listofstudent&);
        friend float find_average();
        friend listofstudent operator +(listofstudent&);
         
};
listofstudent::listofstudent(int l){
    length=l;
    name=new string[length];
    marks=new float[length];
}
listofstudent::listofstudent(const listofstudent& x){
    length=x.length;
    name=new string[length];
    for(int i=0;i<length;i++){
        name[i]=x.name[i];
        marks[i]=x.marks[i];
    }
}
istream& operator>>(istream&in,listofstudent&s){
    for(int i=0;i<s.length;i++){
        in>>s.name[i];
        in>>s.marks[i];

    }
    return in;
}
ostream& operator<<(ostream&out,listofstudent&s){
    for(int i=0;i<s.length;i++){
        out<<s.name[i]<<" ";
        out<<s.marks[i];
    }
    return out;
}
listofstudent operator +(listofstudent x){
    listofstudent temp(length+x.length);
    for(int i=0;i<length;i++){
        temp.name[i]=x.name[i];
        cout<<temp.name[i];
    }
    for(int i=length;i<temp.length;i++){
        temp.name[i]=x.name[i-length];
        cout<<temp.name[i];
    }
    return temp;
}
int main(){
    listofstudent a(1),b(1),c(3);
    cout<<"Enter name of students of list 1:-"<<endl;
    cin>>a;
    cout<<"\nEnter name of students of list 1:-"<<endl;
    cin>>b;
    cout<<"Concatinated name of list 1 and list 2 is: "<<endl;
    c=a+b;
    cout<<c;
    return 0;
}
