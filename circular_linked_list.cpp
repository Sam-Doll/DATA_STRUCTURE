#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
    //constructor
    Node(int value):data(value),next(nullptr),prev(nullptr){}
};
Node* insert(Node* head, int data) {
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
        newNode->next = head;
        newNode->prev = head;
    }else{
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
        head = newNode; 
    }
    return head;
}
void print(Node* head) {
    cout<<"circular linked list-->"<<endl;
    if (head==nullptr) return;
    Node* temp=head;
    do{
        cout<<temp->data <<endl;
        temp=temp->next;
    }while(temp!=head);
    cout << "(head)" << endl; 
}
int main(){
    Node* head = nullptr;
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    print(head);
    return 0;
}