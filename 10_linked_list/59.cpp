// #include <iostream>
// using namespace std;

// struct Node{

//     int data;
//     Node*next;

//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// void findMiddle(Node* head){
//     Node* slow = head;
//     Node* fast = head;

//     while(fast == NULL && fast->next == NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     if(slow != NULL){
//         cout<<"middle  elements: "<<slow->data<<endl;
//     }
// }

// int main() {
// Node* head = new Node(10);
// head->next = new Node(20);
// head->next->next = new Node(30);
// head->next->next->next = new Node(40);
// head->next->next->next->next = new Node(50);

// findMiddle(head);

// return 0;
// }

#include <iostream>
using namespace std;

struct Node {
int data;
Node* next;

Node(int value) {
    data = value;
    next = NULL;
}


};

void findMiddle(Node* head) {
Node* slow = head;
Node* fast = head;


while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
}

if (slow != NULL){
    cout << "Middle element: " << slow->data << endl;
}
}

int main() {
Node* head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);
head->next->next->next = new Node(40);
head->next->next->next->next = new Node(50);

findMiddle(head);

return 0;


}
