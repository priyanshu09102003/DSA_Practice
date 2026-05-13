#include<bits/stdc++.h>
using namespace std;

//Node datatructure

struct Node{
    int data;
    struct Node* leftPtr;
    struct Node* rightPtr;

    Node(int val){
        data = val;
        leftPtr = rightPtr = nullptr;
    }
};

//Preorder traversal

void preorderTraversal(Node* node){
    if (node==nullptr) return;

    cout<<node->data;
    
    preorderTraversal(node->leftPtr);
    preorderTraversal(node->rightPtr);
}

int main(){
    Node* root = new Node(1);
    root->leftPtr  = new Node(2);
    root->rightPtr = new Node(3);
    root->leftPtr->leftPtr  = new Node(4);
    root->leftPtr->rightPtr = new Node(5);

    preorderTraversal(root);  // Output: 1 2 4 5 3
}