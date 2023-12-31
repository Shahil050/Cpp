#include<iostream>
using namespace std;
#include<string.h>
#define Max 128
string Expre;//xyz/*+
int i=0;
string postfx = "";
int result=0;
class Stack{
    int top=-1;
	char stack[Max];
	int postfx_num=0;
	public:
		
	bool isEmpty(){
	if(top==-1){
		return true;
	}
	else{
		return false;
	}
}
bool isFull(){
	if(top==Max-1){
		return true;
	}
	else{
		return false;
	}
}
char peek(){
    return stack[top];
}
void push(char ch){
	if(isFull()){
		cout<<"Stack is overflow"<<endl;
	}
	else{
		top++;//3
		stack[top]=ch;//  stack[0]=+  stack[1]=* stack[2]=( stack[3]=/
		//stack[3]=/
	}
}
char pop(){
	if(isEmpty()){
		cout<<"Stack is underflow"<<endl;
	}
	else{
		char popchar=stack[top];
		stack[top]=0;
		top--;
		return popchar;
	}
}
int checkIfOperand(char ch){
	return(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z');
}
int precedence(char ch) 
{ 
    switch (ch) 
    { 
    case '+': 
    case '-': 
        return 1; 

    case '*': 
    case '/': 
        return 2; 

    case '^': 
        return 3; 
    } 
    return -1; 
} 
void covertInfixToPostfix(string expression) //x+y*(z/w)
{ 
    int i1, j;

    for (i1 = 0; expression[i1]; ++i1) //i1=10
    { 
        // Here we are checking is the character we scanned is operand or not
        // and this adding to output
        if (checkIfOperand(expression[i1])) 
            postfx += expression[i1]; //w
            //0=expression[5]

        // Here, if we scan character ‘(‘, we need push it to the stack. 
        else if (expression[i1] == '(') 
            push(expression[i1]); 

        // Here, if we scan character is an ‘)’, we need to pop and print from the stack  
        // do this until an ‘(‘ is encountered in the stack. 
        else if (expression[i1] == ')') 
        { 
            while (!isEmpty() && peek() != '(') 
             postfx += pop(); 
                // divide
            if (!isEmpty() && peek() != '(') {
            postfx = "Invalid expression";
            return ;
            } // invalid expression              
            else
                pop(); 
        }
        else // if an opertor
        { 
            while (!isEmpty() && precedence(expression[i1]) <= precedence(peek())) {
            	postfx += pop(); 
			}
                
            push(expression[i1]); 
        } 

    } 
    // Once all inital expression characters are traversed
    // adding all left elements from stack to exp
    while (!isEmpty()) {
        char c = pop();
        if(c=='('){
            postfx = "Invalid expression";
            return ;
        }
    	postfx += c;//xyz*w
		
    }
} 	
};
class Postfix:public Stack{
	int top1=-1;
	int new_stack[Max];
public:
 
 bool isEmpty(){
	if(top1==-1){
		return true;
	}
	else{
		return false;
	}
}	
bool isFull(){
	if(top1==Max-1){
		return true;
	}
	else{
		return false;
	}
}
  void push_value(int val){
  	     	if(isFull()){
		cout<<"Stack is overflow"<<endl;
	   }
	else{
		top1++;
		new_stack[top1]=val;//  stack[0]=+  stack[1]=* stack[2]=( stack[3]=/
		//stack[3]=/
	}
  }
  int pop_value(){
	if(isEmpty()){
		cout<<"Stack is underflow"<<endl;
	}
	else{
		int popval=new_stack[top1];
		new_stack[top1]=0;
		top1--;
		return popval;
	}
}		
void postfix_calc(){
    		int val1,val2;
    	for(int j=0;j<postfx.length();j++){//xyzw/*+
    		if(postfx[j]>='a'&&postfx[j]<='z'||postfx[j]>='A'&&postfx[j]<='Z'){
    	       int value;
    			cout<<"enter value:"<<endl;
    			cin>>value;//x=6 ,y=8 , z=10 ,w=12
    			push_value(value);

		}
		else if(postfx[j]='+'){
			 val1=pop_value();
			 val2=pop_value();
			result=val2+val1;
			push_value(result);//6
		
		}
		else if(postfx[j]='-'){
			val1=pop_value();
			val2=pop_value();
			result=val2-val1;
			push_value(result);
		}
		else if(postfx[j]='*'){
			val1=pop_value();//6  0
			val2=pop_value();//8
			result=val2*val1;//0
			push_value(result);//0
		}
		else if(postfx[j]='/'){
			val1=pop_value();//12
			val2=pop_value();//10
			result=val2/val1;//0
			push_value(result);
		}
		else if(postfx[j]='^'){
			val1=pop_value();
			val2=pop_value();
			result=val2^val1;
			push_value(result);
		}
		}
    	cout<<"final value="<<pop_value()<<endl;	
	}
};
int main(){
	Stack s1;	
    cout<<"enter a string:"<<endl;
    cin>>Expre;
	cout<<endl;
    s1.covertInfixToPostfix(Expre);
    if(postfx != "Invalid expression"){
    cout<<"After converting infix to postfix expression:"<<endl;
    cout<<postfx<<endl;
    Postfix p1;
    p1.postfix_calc();
    }
    else{
    cout<<postfx<<endl;
    return 0;
    }
	return 0;
}