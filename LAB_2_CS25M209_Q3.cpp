#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

Node* insertElements(int a){
    cout <<"enter the first value for the linkedlist \n";
    int m;
    cin >>m;
    Node* head = new Node(m);
    Node* temp = head;
    cout<<"enter the next elements for the linkedlist \n";
    for(int i=1;i<a;i++){

        int p;
        cin>>p;
        temp->next = new Node(p);
        temp = temp->next;

    }
    return head;


}

void displayLinkedlist(Node* head){
    Node* temp=head;
    cout<<"the linked list elements are \n";
    while(temp!=nullptr){
        cout << temp->data <<"  " ;
        temp=temp->next;

    };
    cout<<" \n";

};

Node* mergetwosortedlist(Node* head1, Node* head2){
    Node* dummy = new Node(-1);
    Node* temp = dummy;
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=nullptr && temp2 != nullptr){
        if(temp1->data < temp2->data){
            temp->next = temp1;
            
            temp1=temp1->next;
        }
        else{
            temp->next = temp2;
            temp2=temp2->next;

        }
        temp=temp->next;
    }
    while(temp1 != nullptr){
        temp->next = temp1;
        temp=temp->next;
        temp1=temp1->next;

    }
    while(temp2 != nullptr){
        temp->next = temp2;
        temp=temp->next;
        temp2=temp2->next;
    }
    return dummy->next;

}

Node* midOflinkedlist(Node* head){
    if(head==nullptr){
        return nullptr;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=nullptr && fast->next!= nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}

Node* mergesortlinked(Node* head){
    if(head==nullptr || head->next == nullptr){
        return head;
    }
    Node* mid = midOflinkedlist(head);
    Node* right = mid->next;
    mid->next = nullptr;
    Node* left = head;
    left = mergesortlinked(left);
    right = mergesortlinked(right);
    return mergetwosortedlist(left,right);



}


int main(){

    cout << "enter the number of nodes  \n";
    int n;
    cin >>n;

    Node* head = insertElements(n);
    // displayLinkedlist(head);

    Node* mergesort = mergesortlinked(head);
    cout<<"the linkedlist after the mergesort is \n";
    displayLinkedlist(mergesort);

}