#include<iostream>
using namespace std;
class number{
    private:
        int i;
    public:
        number();
        number(int a){
            i=a;
        }
        void print();
};
void number::print(){
    cout<<i<<endl;
}
number::number(){
    i=0;
}
int main(){
    number b,c(3);
    // b.print();
    c.print();
    
    return 0;
}