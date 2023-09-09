// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* head;
//     Node* tail;
//     int size;

//     Node(){
//         head=NULL;
//         size=0;
//         tail = NULL;
//     }

//     Node(int val){
//         this->data=val;
//         this->next=NULL;
//     }

//     void insertAtFirst(int val){
//         Node* node= new Node(val);
//         node->next=head;
//         head=node;

//         if(tail == NULL){
//             tail = head;
//         }
//         size++;
//     }

//     void insertLast(int val) {
//         if(tail == NULL) {
//             insertAtFirst(val);
//             return;
//         }
//         Node* node = new Node(val);
//         tail -> next = node;
//         tail = node;
//         size++;
//     }

//     void deleteAtFirst() {
//         if(head == NULL) {
//             cout << "Empty";
//             return;
//         }

//         head = head->next;
//         size--;

//          if (head == NULL) {
//         tail = NULL;
//     }
//     }

//    void deleteAtlast() {
//      if (head == NULL) {
        
//         return;
//     }

//     if (head == tail) {
//         head = tail = NULL;
//         size = 0;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != tail) {
//         temp = temp->next;
//     }

//     temp->next = NULL;
//     tail = temp;
//     size--;
//    }

//     void displayAtIndex(int index) {
//         if(index < 0 || index >= size || head == NULL) {
//             cout<<"Invalid"<< endl;
//             return;
//         }

//         if(index == 0) {
//             deleteAtFirst();
//             return;
//         }
//         if(index == size - 1) {
//             deleteAtlast();
//             return;
//         }

//         Node* temp = head;
//         for(int i = 1; i < index; i++) {
//             temp = temp->next;
//         }

//         temp->next = temp->next->next;
//         size--;
//     }

//     void display(){
//         Node* temp= head;
//         while(temp!=NULL){
//             cout<<temp->data<<" -> ";
//             temp=temp->next;
//         }
//         cout<<"End" << endl;
//     }
// };

// int main(){
//     Node *node = new Node();
//     node->insertAtFirst(10);
//     node->insertAtFirst(13);
//     node->insertAtFirst(102);
//     node->insertAtFirst(17);
//     node->insertLast(322);
//     node->display();
//     node->displayAtIndex(2);
//     node->display();
//     node->deleteAtFirst();
//     node->display();
//     node->deleteAtlast();
//     node->display();
// }





#include<iostream>
using namespace std;
class Node{
    public:
    Node *head;
    int size;
    Node *next;
    int data;
    Node* tail;
    Node(){
        head=NULL;
        size=0;
        tail = NULL;
    }
    Node(int val){
        this->data= val;
        this->next=NULL;
    }
       void insertAtFirst(int val){
        Node* node= new Node(val);
        node->next=head;
        head=node;

        if(tail == NULL){
            tail = head;
        }
        size++;
    }

    void insertLast(int val) {
        if(tail == NULL) {
            insertAtFirst(val);
            return;
        }
        Node* node = new Node(val);
        tail -> next = node;
        tail = node;
        size++;
    }
     void insertNum(int num) {
        Node* node = new Node(num);
        if (head == NULL || num < head->data) {
            node->next = head;
            head = node;
            size++;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL && temp->next->data <= num) {
            temp = temp->next; 
        }

        node->next = temp->next;
        temp->next = node;
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
    int n;
    cin>>n;
    Node *node = new Node();
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        node->insertLast(val);
    }
    int num;
    cin>>num;
    node->insertNum(num);
    node->display();
}