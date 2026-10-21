#include <iostream>
using namespace std;

class Node{
    public: 
     int data;
     Node* next;

     Node(int value){
        data = value;
        next = NULL;
     }
};

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* newNext = NULL;

    while(curr != NULL){
        newNext = curr->next;
        curr->next = prev;
        prev = curr;
        curr = newNext;
    }
    return prev;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
 Node*head = new Node(10);
 head->next = new Node(20);
 head->next->next = new Node(30);
 head->next->next->next = new Node(40);

 cout<<"original ll: "<<endl;
 display(head);

 head = reverse(head);

 cout<<"Reverse Linked List: "<<endl;
 display(head);
return 0;
}