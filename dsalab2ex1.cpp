#include<iostream>
#include<string>
using namespace std;
#define n 5
int stack[n],tos=-1;
int info;
bool isOperator(char);
int priority(char);
string infixtopostfix(const string&);
int evaluatepostfix(const string&);
void push();
void pop();
void display();
 
bool isOperator(char c){
    return (c=='+'||c=='-'||c=='*'||c=='/');
}
int priority(char alpha){
    if(alpha == '+'|| alpha == '-'){
        return 1;
    }
    else if(alpha == '*'||alpha=='/'){
        return 2;
    }
    return 0;
}
string infixtopostfix(const string& data1){
    string postfix;
    string stack1;
    for(char c:data1){
        if(isalnum(c)){
            postfix+=c;
        }
        else if(c=='('){
            stack1.push_back(c);
        }
        else if(c==')'){
            while(!stack1.empty()&&stack1.back()!='('){
                postfix+=stack1.back();
                stack1.pop_back();
            }
            stack1.pop_back();
        }
        else if(isOperator(c)){
            while(!stack1.empty()&&priority(stack1.back())>=priority(c)){
                postfix +=stack1.back();
                stack1.pop_back();
            }
            stack1.push_back(c);
        }
    }
    while(!stack1.empty()){
        postfix+=stack1.back();
        stack1.pop_back();
    }
    return postfix;
    
}
int evaluatepostfix(const string& data1){
    int operandstack[100];
    for(char c: data1){
        if(isdigit(c)){
            operandstack[++tos]=c - '0';
        }
        else if(isOperator(c)){
            int operand2=operandstack[tos--];
            int operand1=operandstack[tos--];

            int result;
            switch(c){
               case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break; 
            }
            operandstack[++tos]=result;

        }
    }
    return operandstack[tos];
}
void push(){
    if(tos==n-1){
        cout<<"Stack Overflow";
    }
    else{
        cout<<"Enter data:"<<endl;
        cin>>info;
        tos++;
        stack[tos]=info;
        cout<<"TOS is "<<tos<<endl;
    }
}
void pop(){
    if(tos==-1){
        cout<<"Stack underflow"<<endl;
    }
    else{
        info = stack[tos];
        cout<<"Deleted item is "<<info<<endl;
        tos--;
    }
}
void display(){
    int i;
    if(tos==-1){
        cout<<"Stack underflow";
    }
    else{
        for(i=0;i<=tos;i++){
            cout<<stack[i];
        }
        cout<<"\t";
    }
    cout<<endl;
}
int main(){
    string data1,data2;
    int result,choice;
    cout<<"Menu"<<endl<<"1) Push"<<endl<<"2) Pop"<<endl<<"3) display"<<endl;
    cout<<"4) Evaluate postfix expression:"<<endl<<"5) Infix to postfix conversion:"<<endl;
    cout<<"6) exit"<<endl;
    while(1){
        cout<<"Enter your choices:"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                cout<<"Enter Postfix expression to evaluate:"<<endl;
                cin>>data1;
                result=evaluatepostfix(data1);
                cout<<"Result is "<<result<<endl;
                break;

            case 5:
                cout<<"Enter the expression:"<<endl;
                cin>>data1;
                data2=infixtopostfix(data1);
                cout<<"Postfix expression is "<<data2<<endl;
                break;

            case 6:
                exit(0);
                break;
        }
    }
    return 0;
}