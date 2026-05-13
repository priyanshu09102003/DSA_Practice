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

vector<vector<int>> levelOrder(Node* root, vector<vector<int>>& ans){
    if(root == nullptr) return ans;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> level;

        for(int i = 0; i < size; i++){
            Node* currentNode = q.front();
            q.pop();

            if(currentNode->left  != nullptr) q.push(currentNode->left);
            if(currentNode->right != nullptr) q.push(currentNode->right);

            level.push_back(currentNode->data);
        }

        ans.push_back(level);
    }

    return ans;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<vector<int>> ans;
    levelOrder(root, ans);

    cout << "Level Order Traversal is:\n";
    for(auto& level : ans){          
        for(int val : level){
            cout << val << " ";
        }
        cout << '\n';
    }
}