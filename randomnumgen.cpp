#include<iostream>
#include<time.h>
#include<vector>
using namespace std;
int main(){
    //random number generation
    for(int i=0;i<7;i++){
        cout<<rand()<<endl;
    }

    cout<<endl<<endl;


    //modulo operator to see the pattern of random number generation
    for(int i=0;i<7;i++){
        cout<<(rand()%6)+1<<endl;
    }
    cout<<endl<<endl;

    // srand to change the pattern everytime
    srand(5);
    for(int i=0;i<7;i++){
        cout<<(rand()%6)+1<<endl;
    }
    cout<<endl<<endl;

    /*srand in form of time it changes value every time the time of computer changes in milli or micro sec of time*/
    srand(time(0));
    for(int i=0;i<7;i++){
        cout<<(rand()%6)+1<<endl;
    }

    return 0;
}
