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
Node* deleteNode(Node* root, int value){
    if(root == nullptr){
        return root; 
    }
    if(value < root->data){
        root->left = deleteNode(root->left, value);
    }else if(value > root->data){
        root->right = deleteNode(root->right, value);
    }else{
        // Case 1:
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 2: 
        Node* parent = root;
        Node* successor = root->right;
        while(successor->left != nullptr){
            parent = successor;
            successor = successor->left;
        }
        root->data = successor->data;
        
        if(parent->left == successor){
            parent->left = successor->right;
        }else{
            parent->right = successor->right;
        }
        delete successor;
    }
    return root;
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
    cout << "before deletion: ";
    in_order_trav(root);
    cout << endl;
    root = deleteNode(root, 50);
    cout << "after deleting 50: ";
    in_order_trav(root);
    return 0;
}
