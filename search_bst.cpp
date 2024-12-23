#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data=value;
        left=right=nullptr;
    }
};
Node* insert(Node*root, int value){
    if(root==nullptr){
        return new Node(value);
    }
    if(value < root->data){
        root->left= insert(root->left, value);
    }else if(value > root->data){
        root-> right = insert(root->right , value);
    }
    return root;
}
bool search(Node* root, int value){
    if(root == nullptr){
        return false; 
    }
    if(root->data == value){
        return true; 
    }else if(value < root->data){
        return search(root->left, value); 
    }else{
        return search(root->right, value); 
    }
}
void in_order_trav(Node* root){
    if(root!=nullptr){
        in_order_trav(root->left);
        cout<< root->data <<" ";
        in_order_trav(root->right); 
    }
}
int main(){
    Node* root = nullptr; 
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    cout << "In-order Traversal: ";
    in_order_trav(root);
    cout << endl;
    int value = 40;
    if(search(root, value)){
        cout<<value<<" is found in the BST" << endl;
    }else{
        cout<<value<<" is not found in the BST" << endl;
    }
    return 0;
}
