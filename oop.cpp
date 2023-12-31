#include <iostream>
using std::string;
class Employee{
/* protected and private doesn`t give option later only public give option*/
public:
string Name;
string Age;
string Company;

/* for single or multiple paragraph introduction*/
void IntroduceYourself(){
    std::cout<<"Name:-"<<Name <<std::endl;
    std::cout<<"Age:-"<<Name <<std::endl;
    std::cout<<"Company:-"<<Company<<std::endl;

}
};
int main(){
    Employee employee1;
    employee1.Name = "Shahil Shrestha";
    employee1.Age = 19;
    employee1.Company = "City finance Corporation";
    employee1.IntroduceYourself();
    employee1.IntroduceYourself();
    





}