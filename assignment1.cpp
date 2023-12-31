/* WAP to represent a quadratic polynomial. Add a member function that prints a message indicating whether the polynomial has a real root or not
*/
#include<iostream>
using namespace std;
class quadratic{
    private:
        double b,a,c;

    public:
        void read();
        void print();
};
void quadratic::read(){
    cin>>b>>a>>c;
}
void quadratic::print(){
    double result;
    result=b*b-4*a*c;
    if(result>0){
        cout<<"Real roots";
    }
    else{
        cout<<"Imaginary roots";
    }
}
int main(){
    quadratic a1;
    cout<<"Enter b then a and c respectively:"<<endl;
    a1.read();
    a1.print();
    return 0;
}
