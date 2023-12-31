#include<iostream>
#include<string>
#include<stack>
using namespace std;
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

void printElementOfStack(stack<char> s){
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}

int main(){
    stack<char> infix1;
    stack<char> postfix1;
    cout<<"Enter infix elements:";
    string s1;
    cin>>s1;
    
    for(char c:s1){
        if(isalnum(c)){
            postfix1.push(c);
        }
        else if(c=='('){
            infix1.push(c);
        }
        else if(c==')'){
            while(!infix1.empty()&&infix1.top()!='('){
                postfix1.push(infix1.top());
                infix1.pop();
            }
            
            infix1.pop();
            
        }
        else if(isOperator(c)){
            while(!infix1.empty()&&priority(infix1.top())>=priority(c)){
                postfix1.push(infix1.top());
                infix1.pop();
            }
            infix1.push(c);
        }
    }
    while(!infix1.empty()){
        postfix1.push(infix1.top());
        infix1.pop();
    }
    printElementOfStack(postfix1);

    return 0;
}