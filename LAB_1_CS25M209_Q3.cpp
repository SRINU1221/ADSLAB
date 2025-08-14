#include <iostream>
#include <vector>
using namespace std;


#define MAX 20

int stk[MAX];
int top =-1;

void push(int x){
    if(top > MAX-1){
        cout << "the stack is overflow\n";
    }
    else{
        top=top+1;
        stk[top] = x;
        cout <<x <<" is pushed in the stack\n";
    }
}

void pop(){
    if(top <0){
        cout << "the stack is underflow\n";
    }
    else{
        cout << stk[top] << "is popped\n";
        top--;
    }
}

int peak(){
    if(top <0){
        cout << "the stack is empty\n";
        return -1;
    }
    else{
        return stk[top];
    }
}

bool empty(){
    return top==-1;
}

void display(){
    if(top <0){
        cout << "the stack is empty\n";
    }
    else{
        for(int i=0;i<=top;i++){
            cout <<stk[i] << " ";
        }
        cout << endl;
    }
}

vector<int>stk_vector;
void pushVector(int x){
    stk_vector.push_back(x);
    cout<<x << " is pushed in the stack \n";
}

void popVector(){
    if(stk_vector.empty()){
        cout<<" stack is underflow\n";
    }
    else{
        cout<<stk_vector.back()<< " is popped \n" ;
        stk_vector.pop_back();
    }
}

int peakVector(){
    if(stk_vector.empty()){
        cout << " the stack is empty\n";
        return -1;
    }
    else{
        return stk_vector.back();
        
    }
}

bool emptyVector(){
    return stk_vector.empty();
}

void displayVector(){
    if(stk_vector.empty()){
        cout << "the vector is empty \n";
    }
    else{
        for(int i=0;i<stk_vector.size();i++){
            cout<<stk_vector[i] << " ";
        }
        cout<<endl;
    }
}





int main(){
    
    push(10);
    push(20);
    push(30);
    push(50);
    display();
    pop();
    cout <<"the peak of the stack is " << peak() <<" \n";
    display();
    cout <<empty() << " \n";
    
    cout <<"stack vector\n";
    pushVector(2);
    pushVector(5);
    pushVector(7);
    pushVector(3);
    pushVector(1);
    displayVector();
    popVector();
    cout <<"the peak of the stack is " << peakVector() <<" \n";
    displayVector();
    cout<<emptyVector();
    
    
}







