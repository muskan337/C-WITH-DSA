// #include<iostream>
// using namespace std:

// class Node{
//  public:
//  int data;
//  Node* next;

//  Node(int val){
//     data = val;
//     next = NULL;
//  }

// };

// class List{
//  Node*head;
//  Node*tail;

//  public:
//  List(){
//     head = tail = NULL;
//  }

// };



// int main(){

//     return 0;
// }




//  #include<iostream>
// using namespace std;

// class Node{
//  public:
//  int data;
//  Node* next;

//  Node(int val){
//     data = val;
//     next = NULL;
//  }

// };

// class List{
//  Node*head;
//  Node*tail;

//  public:
//  List(){
//     head = tail = NULL;
//  }
// void push_front(int val){
//     Node* newNode = new Node(val); // dynamic - means func call ke khtmm hone k baad bhi menmory me persist kregii
//     // Node newNode(val);   //static - means outside this func this value will be deleted but we want to make the func in main
   
//     //if head is empty
//     if(head == NULL){
//         head = tail = newNode;
//         return;
// }else{ // if head is not empty
//     newNode->next = head; 
//     head = newNode;
// }
// }

// void printLL(){
//     Node* temp = head;

//     while(temp != NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//    cout<<"NULL"<<endl;
// }
// };



// int main(){

//     List l1; 
//   l1.push_front(1);
//   l1.push_front(2);
//   l1.push_front(3);

//   l1.printLL();
//     return 0;
// }


 #include<iostream>
using namespace std;

class Node{
 public:
 int data;
 Node* next;

 Node(int val){
    data = val;
    next = NULL;
 }

};

class List{
 Node*head;
 Node*tail;

 public:
 List(){
    head = tail = NULL;
 }
void push_back(int val){ //O(1)
    Node* newNode = new Node(val); // dynamic - means func call ke khtmm hone k baad bhi menmory me persist kregii
    // Node newNode(val);   //static - means outside this func this value will be deleted but we want to make the func in main
   
    //if head is empty
    if(head == NULL){
        head = tail = newNode;
        return;
}else{ // if head is not empty
    tail->next = newNode; 
    tail = newNode;
}
}
 
void push_front(int val){  //O(1)
    Node* newNode = new Node(val); // dynamic - means func call ke khtmm hone k baad bhi menmory me persist kregii
    // Node newNode(val);   //static - means outside this func this value will be deleted but we want to make the func in main
   
    //if head is empty
    if(head == NULL){
        head = tail = newNode;
        return;
}else{ // if head is not empty
    newNode->next = head; 
    head = newNode;
}
}

void pop_front(){ //O(1)
    if(head == NULL){
        cout<<"empty list"<<endl;
        return;

    }

    Node*temp = head;
    head = head->next;
    temp->next = NULL;

    delete temp;

}

void pop_back(){ //O(n)
    // prev = tail-1 node
   if(head == NULL){
    cout<<"list is empty"<<endl;
    return;
   }

   Node*temp  = head;
   while(temp->next != tail){
  temp = temp->next;   //tail ko increase kr rhe h k=jb th prev na mil jaaye
   }
   temp->next = NULL;   //connectionn broke
   delete tail; // deleting the data of the tail node, not the name but the heap memory in the storage
   tail = temp;
}

void insert(int val, int pos){ //O(n)
    if(pos < 0 ){
        cout<<"not possible!!!!!"<<endl;
        return;
    }

    if(pos == 0){
        push_front(val);
    }

    Node*temp = head;
    for(int i=0; i<pos-1; i++){
        temp= temp->next;
    }

   Node*newNode  = new Node(val);
   newNode->next = temp->next;
   temp->next = newNode;

}

 
void printLL(){  //O(n)
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
   cout<<"NULL"<<endl;
}

  int Search(int key){  //O(n)

    Node*temp = head;
    int idx = 0;

    while(temp != NULL){
        if(temp->data == key){
            return idx;
        }
        temp = temp->next;
        idx++;
    }
    return -1;
   }

};



int main(){

    List l1; 
  l1.push_front(1);
  l1.push_front(2);
  l1.push_front(3);

   l1.insert(4, 1);

//   l1.push_back(4);

//   l1.pop_front();
//   l1.printLL();

//   l1.pop_front();
//   l1.printLL();

    // l1.printLL();

     l1.Search(1);

    return 0;
}


