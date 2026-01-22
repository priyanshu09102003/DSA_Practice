//Defining nodes in a Linked List

#include <bits/stdc++.h>
using namespace std;

class Node{
        public:
            int data;
            Node* next;
        
        public:
            Node(int data1, Node* next1){
                data1 = data;
                next1 = next;
            }
};

int main(){ 

    Node* y = new Node(2, nullptr);
    cout<<y;
}