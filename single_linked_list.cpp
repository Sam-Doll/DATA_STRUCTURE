#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insert(Node*& head, int data){
    Node* newNode= new Node;
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}
void output(Node* head){
    cout<< "Linked list is -->"<<endl;
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
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
                insert(head,data);
                func(head);
                break;

            case 'N':
            case 'n':
                output(head);
                break;

            default:
            cout << "Invalid input! Please enter Y or N" << endl;
            func(head);         
            break;
        }
}

int main(){
    Node* head= nullptr;
    func(head);
    return 0;
}