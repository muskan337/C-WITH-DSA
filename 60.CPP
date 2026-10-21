// #include <iostream>
// using namespace std;

// struct Node{
//   int data;
//   Node* next;

//   Node(int value){
//     data = value;
//     next = NULL;
//   }
// };

// bool isCircular(Node* head){
//     Node* slow = head;
//     Node* fast = head;

//     while(fast != NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//          if(slow ==  fast){
//             return true;
//          }
//     }
//     return false;
// }

// int main() {
// Node* head = new Node(10);
// head->next = new Node(20);
// head->next->next = new Node(30);
// head->next->next->next = new Node(40);
// head->next->next->next = new Node(50);

// head->next->next->next->next = head->next->next;

// if(isCircular(head)){
//     cout<<"cycle is detected"<<endl;
// }else{
//     cout<<"no cycle detected"<<endl;
// }

// return 0;
// }

#include<iostream>
using namespace std;

 struct Node{
  int data;
  Node* next;

  Node(int value){
    data = value;
    next = NULL;
  }
};



Node* findCycleNode(Node* head){
    bool isCycle = false;
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
         if(slow ==  fast){
            isCycle = true;
            break;
         }
        }

        if(!isCycle){
            return NULL;
        }

        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }




int main() {
Node* head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);
head->next->next->next = new Node(40);
head->next->next->next = new Node(50);

head->next->next->next->next = head->next->next;

Node* cycleNode = findCycleNode(head);

if (cycleNode != NULL) {
    cout << "Cycle starts at node: " << cycleNode->data << endl;
} else {
    cout << "No cycle exists." << endl;
}

return 0;
}