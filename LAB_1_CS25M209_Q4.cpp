
#include <iostream>
#include <vector>
using namespace std;

#define MAX 50
int queue[MAX];
int front =-1;
int rear = -1;

void pushQueue(int x){
    if(rear>=MAX-1){
        cout << "the queue is overflow\n";
        return;
    }
    if(front == -1 ){
        front=0;
    }
    rear++;
    queue[rear] = x;
    
}

void dequeue(){
    if(front == -1  || front > rear){
        cout << "queue is underflow";
    }
    
    cout << queue[front] << " \n";
    front++;
    if(front>rear){
        front =-1;
        rear=-1;
    }
    
    
}

int frontQueue(){
    if(front == -1 || front >rear){
        cout << "queue is empty \n";
        return -1;
    }
    else{
        return queue[front];
    }
    
    
}

bool emptyQueue(){
    return front == -1 || front>rear;
    
}

void displayQueue(){
    if(front == -1 || front > rear){
        cout << "the queue is empty \n";
    }
    else{
        for(int i=front;i<=rear;i++){
            cout << queue[i] << " \n";
        }
    }
    
}


vector<int>vectorQueue;
void pushVectorQueue(int n){
    vectorQueue.push_back(n);
}

void dequeueVectorQueue(){
    if(vectorQueue.empty()){
        cout <<"the queue is underflow \n";
        return;
    }
    else{
        cout << "the deleted element from queue is " << vectorQueue.front();
        vectorQueue.erase(vectorQueue.begin());
    }
    
}

int topVectorQueue(){
    if(vectorQueue.empty()){
        cout <<"the queue is empty \n";
        return -1;
    }
    else{
        cout <<"the top of the queue is \n";
        return vectorQueue.front();
    }
    
}

bool isEmptyVectorQueue(){
    return vectorQueue.empty();
}

void displayVectorQueue(){
    if(vectorQueue.empty()){
        cout <<"the queue is empty \n";
        
    }
    else{
        cout << " the vector queue elements are \n";
        for(int i=0;i<vectorQueue.size();i++){
            cout << vectorQueue[i] << " ";
        }
    }
    
}



int main(){
    
    cout << "queue operation using array \n";
    pushQueue(20);
    pushQueue(30);
    pushQueue(40);
    pushQueue(60);
    pushQueue(70);
    int res = topVectorQueue();
    cout << res << " \n";
    cout <<" \n";
    dequeue();
    displayQueue();
    int first = frontQueue();
    if(first != -1){
        cout <<"the first element of the queue is " << first << " \n";
    }
    
    displayQueue();
    
    cout <<"queue operation using vector \n";
    pushVectorQueue(10);
    pushVectorQueue(20);
    pushVectorQueue(30);
    pushVectorQueue(40);
    displayVectorQueue();
    cout <<" \n";
    
    int vectortop = topVectorQueue();
    if(vectortop !=-1){
        cout << vectortop << " \n";
    }
    
    
    dequeueVectorQueue();
    cout << " \n";
    isEmptyVectorQueue();
    cout << " \n";
    displayVectorQueue();
    cout << " \n";
    dequeueVectorQueue();
    cout <<" \n";
    displayVectorQueue();
    
}