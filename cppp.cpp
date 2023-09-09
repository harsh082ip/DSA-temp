#include<iostream>
using namespace std;
class Node{
    public:
    Node *head;
    int size;
    Node *next;
    int data;
    Node(){
        head=NULL;
        size=0;
    }
    Node(int val){
        this->data= val;
        this->next=NULL;
    }
    void insertAtFirst(int val){
        Node* node= new Node(val);
        node->next=head;
        head=node;
        size++; // Increment the size when inserting at the beginning
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
        node->insertAtFirst(val);
    }
    int num;
    cin>>num;
    node->insertNum(num);
    node->display();
}
