#include<iostream>
using namespace std;
class livingBeing{
    protected:
        string name;
        int avg_lifespan;
    
    public:
        void read();
        void print();
};
void livingBeing::read(){
    cin>>name;
    cin>>avg_lifespan;
}
void livingBeing::print(){
    cout<<name<<endl;
    cout<<avg_lifespan<<endl;
}



class Animal:public livingBeing{
    protected:
        int legs;
        int weights;
    
    public:
        void read();
        void print();

};
void Animal::read(){
    livingBeing::read();
    cin>>legs;
    cin>>weights;
}
void Animal::print(){
    livingBeing::print();
    cout<<legs<<endl;
    cout<<weights<<endl;
}


class Plants:public livingBeing{
    protected:
        string types;//herbs,shurbs,tree

    public:
        void print();
        void read();

};




class :public Plants{
    protected:
        string 
}


