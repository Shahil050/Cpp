#include<iostream>
using namespace std;
class student{
    private:
        string *name;
        int length;

    public:
        student(int);
        void print();
        void read();
        
};
student::student(int a){
    length =a;
    name=new string[length];
}

void student::print(){
    for(int i=0;i<length;i++){
        cout<<name[i]<<endl;
    }
}
void student::read(){
    for(int i=0;i<length;i++){
        cin>>name[i];
    }
}
int main(){
    
    cout<<"Enter number of students"<<endl;
    student s1(5);
    cout<<"\nEnter name of students"<<endl;
    s1.read();
    cout<<"\nYour entered name is:"<<endl;
    s1.print();
    return 0;
}



