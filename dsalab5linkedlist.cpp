#include<iostream>
#include<cstddef>
using namespace std;
int pos;
struct node;
void insertatbegining();
void insertatspecificposition();
void insertatend();
void delatbegining();
void delatend();
void delatspecificposition();

struct node{
    int info;
    struct node* next;
};
struct node* start=NULL,*newnode,*temp,*temp1;

struct node* create_node(){
    node* newnode=new node(); 
    return newnode;
    
}
void insertatbegining(){
    struct node* newnode = create_node();
    cout<<"\nEnter any data:";
    cin>>newnode->info;
    
    if(start==NULL){
        start=newnode;
        newnode->next=NULL;
    }
    else{
        
        newnode->next=start;
        start=newnode;
    }

}
void insertatspecificposition(){
    struct node* newnode = create_node();
    cout<<"\nEnter any data:";
    cin>>newnode->info;
    
    cout<<"Enter position to insert:";
    cin>>pos;
    temp=start;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void insertatend(){
    struct node* newnode = create_node();
    cout<<"\nEnter any data:";
    cin>>newnode->info;
    
    newnode->next=NULL;
    if(start==NULL){
        start=newnode;
    }
    else{
        temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display(){
    if(start==NULL){
        cout<<"\nList Empty";
    }
    else{
        temp=start;
        while(temp!=NULL){
            cout<<temp->info;
            cout<<" ";
            temp=temp->next;
        }
    }
    cout<<endl;
}
void delatbegining(){
    if(start==NULL){
        cout<<"List Empty";
    }
    else if(start->next==NULL){
        start=NULL;
    }
    else{
        temp=start;
        start=start->next;
        delete temp;
    }
}
void delatspecificposition(){
    int i;
    if(start==NULL){
        cout<<"\nList is empty";
    }
    else{
        cout<<"\nEnter position of element to delete:";
        cin>>pos;
        if(pos==1){
            delatbegining();
        }else{
            temp = start;
            for(int i=1;i<pos-1/* && temp!=NULL*/;i++){
            temp=temp->next;
            }}
            if (temp == NULL || temp->next == NULL) {
                cout << "Invalid position.\n";
                return;
            }
        struct node* temp1 = temp->next;
        
        temp->next=temp1->next;
        cout<<"\nDeleted node is:"<<temp1->info;
        delete temp1;
    }
}
void delatend(){
    if(start==NULL){
        cout<<"\nList is empty";
    }
    else if(start->next==NULL){
        cout<<start->info;
        start=NULL;
    }
    else{
        temp=start;
        temp1=temp->next;
        while(temp1->next!=NULL){
            temp=temp->next;
            temp1=temp1->next;
        }
        cout<<temp1->info;
        delete temp1;
        temp->next=NULL;
    }
}

int main(){
    int choice;
    cout<<"MENU"<<endl;
    cout<<"1) Insert at begining\n2) Insert at specific position\n3) Insert at end\n";
    cout<<"4) Delete at begining\n5) Delete at specific position\n6) Delete at end\n";
    cout<<"7)Display\n8) Exit"<<endl;
    while(1){
        cout<<"Enter your choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:
            insertatbegining();
            break;
            
        
        case 2:
            insertatspecificposition();
            break;
            
        
        case 3:
            insertatend();
            break;
           

        case 4:
            delatbegining();
            break;
            

        case 5:
            delatspecificposition();
            break;

        case 6:
            delatend();
            break;

        case 7:
            display();
            break;

        case 8:
            exit(0);
            break;


    }}
    return 0;
}