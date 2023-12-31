#include<iostream>
using namespace std;
#define max 5
int rear=-1,front=-1;
int queue[max],choice;
int data1;
void linear_deque(){
    if((front==-1 && rear==-1)||front==-1){
        cout<<"Empty Queue";
        return;
    }
    else{
        int newdata=queue[front];
        front=front+1;
    }
}

void linear_enque(int newdata){
    if(rear==max-1){
        cout<<"Queue Full";
        return;
        
    }else if(rear==-1 && front==-1){
        front=0;
        rear=0;
    }
    else{
        rear=rear+1;
    }
    queue[rear]=newdata;
}
void circular_enque(int newdata){
    if((front==0 && rear==max-1)|| (front=rear+1)){
        cout<<"Queue full";
        return;
        
    }
    else if(front==-1 && rear==-1){
        front=0;
        rear=0;
    }
    else
     rear=(rear+1)%max;
     queue[rear]=newdata;
}
void circular_deque(){
    if(rear==-1 && front==-1){
        cout<<"Queue empty";
        return;
        
    }
    else{
        int data;
        data=queue[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%max;
        }
    }
}
void display_circular_queue(){
    if(front==-1 && rear==-1){
        cout<<"Queue Empty";
        return;
    }
    else{
        while(front<=rear){
            cout<<queue[front]<<"\t";
            front=(front+1)%max;
        }
    }
}

void display_linear_queue(){
    if(front==-1 && rear==-1){
        cout<<"Empty queue";
        return;
    }
    else{
        for(int i=front;i<=rear;i++){
        cout<<queue[i]<<"\t";
        }
    }
}
int main(){
    cout<<"Menu"<<endl;
    cout<<"1.Insert in Linear Queue"<<endl;
    cout<<"2.Deletion from linear queue"<<endl;
    cout<<"3.Display Elements from linear queue"<<endl;
    cout<<"4.Insertion in circular queue"<<endl;
    cout<<"5.Deletion from circular queue"<<endl;
    cout<<"6.Display Elements from circular queue"<<endl;
    cout<<"7.Exit"<<endl;
    while(1){
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter new data:";
                cin>>data1;
                linear_enque(data1);
                break;

            case 2:
                linear_deque();
                break;

            case 3:
                display_linear_queue();
                break;

            case 4:
                cout<<"Enter new data:";
                cin>>data1;
                circular_enque(data1);
                break;

            case 5:
                circular_deque();
                break;

            case 6:
                display_circular_queue();
                break;

            case 7:
                exit(0);

            default:
               cout<<"Wrong choice"<<endl; 
        }
    }
    return 0;
}