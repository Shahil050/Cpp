#include<iostream>
using namespace std;
class employee{
    private:
        int id;
        string name;
        string address;
        string gender;
        int salary;

    public:
        void read();
        void display();
};
void employee::read(){
    cin>>id>>name>>address>>gender>>salary;
}
void employee::display(){
    cout<<id<<"\t"<<name<<"\t"<<address<<"\t"<<gender<<"\t"<<salary<<"\t";
}
int main(){
    employee a[2];
    for(int i=0;i<2;i++){
        cout<<"Enter employee id,name,address,gender,salary respectively"<<endl;
        a[i].read();

    }
    cout<<"You have displayed"<<endl;
    for(int i=0;i<2;i++){
        a[i].display();
        cout<<endl;
    }
    return 0;
}