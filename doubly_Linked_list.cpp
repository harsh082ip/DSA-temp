// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     Node* head;
//     Node* prev;
//     Node * next;
//     int data;
//     int size;
//     Node(){
//         head=NULL;
//         prev= NULL;
//         size=0;
//     }

//     Node(int val){
//         this->data= val;
//         this->head= NULL;
//         this->prev= NULL;
//     }
    
//     void insertAtFirst(int val){
//         Node* node= new Node(val);
//         node->next= head;
//         node->prev=NULL;
//         if(head!=NULL){
//             head->prev=node;
//         }
//         head=node;
//     size++;
//     }

//  void insertLast(int val) {
//   Node* node = new Node(val);
//   Node* temp = head;
//   while (temp->next != NULL) {
//     temp= temp->next;
//   }
//  temp->next = node;
//   node->prev = temp;
//   size++;
// } 


//  void insert(int value, int index){
        
//         Node* temp=head;
//         Node* node= new Node(value);
//         for(int i=1; i<index; i++){
//             temp=temp->next;
//         }
//         node->next=temp->next;
//         node->prev=temp;
//         temp->next=node;
//         node->next=temp->next->next;

//         if(index==0){
//             insertAtFirst(value);
//         }
//         if(index==size-1){
//             insertLast(value);
//         }
//         size++;
//     }

  
//      void display(){
//         Node* temp= head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//     }
// };
// int main(){
//     Node * node= new Node();
//     node->insertAtFirst(15);
//     node->insertAtFirst(35);
//     node->insertAtFirst(65);
//     node->insertAtFirst(89);
//     node->insertLast(12);
//     node->display();
//     cout<<endl;
// }


#include<iostream>
using namespace std;
class Node{
    public:
    Node* head;
    Node* prev;
    Node * next;
    int data;
    int size;
    Node(){
        head=NULL;
        prev= NULL;
        size=0;
    }

    Node(int val){
        this->data= val;
        this->head= NULL;
        this->prev= NULL;
    }
    
    void insertAtFirst(int val){
        Node* node= new Node(val);
        node->next= head;
        node->prev=NULL;
        if(head!=NULL){
            head->prev=node;
        }
        head=node;
    size++;
    }

 void insertAtLast(int val) {
  Node *node = new Node(val);
  Node *temp = head;
  while (temp->next != NULL) {
    temp= temp->next;
  }
    temp->next = node;
  node->prev = temp;
  size++;
} 
void insert(int value, int index){
        
        Node *temp=head;
        Node *node= new Node(value);
        for(int i=1; i<index; i++){
            temp=temp->next;
        }
        node->next=temp->next;
        node->prev=temp;
        temp->next=node;
        node->next=temp->next->next;

        if(index==0){
            insertAtFirst(value);
        }
        if(index==size-1){
            insertAtLast(value);
        }
        size++;

    }

     void display(){
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    Node * node= new Node();
    node->insertAtFirst(15);
    node->insertAtFirst(35);
    node->insertAtFirst(65);
    node->insertAtFirst(89);
    node->display();
    cout<<endl;
    node->insertAtLast(1);
    node->display();

}