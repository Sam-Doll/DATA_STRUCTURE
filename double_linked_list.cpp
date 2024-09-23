#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
    //constructor
    Node(int value):data(value),next(nullptr),prev(nullptr){}
};

Node* insert(Node* head, Node* newNode){
    newNode->next=head; 
    if(head!=nullptr){
        head->prev=newNode; 
    }
    return newNode; 
}

void print(Node* head){
    cout<<endl;
    cout<<"Doubly linked list-->"<<endl;
    Node* temp=head;
    while (temp!=nullptr) {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout << endl;
}
void func(Node*& head){
        int data;
        char rep;
        cout<<"Do you want to insert element? (Y or N)"<<endl;
        cin>>rep;
        switch(rep){
            case 'Y':
            case 'y':
                cout<<"Enter element you want to insert"<<endl;
                cin>>data;
                head= insert(head,new Node(data));
                func(head);
                break;

            case 'N':
            case 'n':
                print(head);
                break;

            default:
            cout << "Invalid input! Please enter Y or N" << endl;
            func(head);         
            break;
        }
}

int main(){
    Node* head=nullptr;
    func(head);
    return 0;
}