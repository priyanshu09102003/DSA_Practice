#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

vector<int> preorderTraversal(Node* root, vector<int>& ans){
    if(root == nullptr) return ans;  
    ans.push_back(root->data);
    preorderTraversal(root->left, ans);
    preorderTraversal(root->right, ans);
    return ans;
}

vector<int> inorderTraversal(Node* root, vector<int>& ans){
    if(root == nullptr) return ans;  
    inorderTraversal(root->left, ans);
    ans.push_back(root->data);
    inorderTraversal(root->right, ans);
    return ans;
}

vector<int> postorderTraversal(Node* root, vector<int>& ans){
    if(root == nullptr) return ans;  
    postorderTraversal(root->left, ans);
    postorderTraversal(root->right, ans);
    ans.push_back(root->data);
    return ans;
}


void printVector(const vector<int>& v){  
    for(int x : v) cout << x << " ";
    cout << '\n';
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> preorder, inorder, postorder;

    cout << "Preorder: ";
    printVector(preorderTraversal(root, preorder));

    cout << "Inorder: ";
    printVector(inorderTraversal(root, inorder));

    cout << "Postorder: ";
    printVector(postorderTraversal(root, postorder));
}