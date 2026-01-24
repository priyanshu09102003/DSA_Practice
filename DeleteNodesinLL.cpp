//Given a LinkedList. Delete the nodes of the LL as following
//1. Head   2. At a particular position     3. A value      4. Last Node

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    public:
        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

//Convert the array to LL

Node* convertLLToArray(vector<int>& arr){
    int n = arr.size();
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i<n; i++){
        Node* nextNode = new Node(arr[i]);

        //Link the nodes
        mover->next = nextNode;

        //Increment the mover
        mover = nextNode;
    }

    return head;
};

//Traverse the LL

void traverseLL(Node* head){
    Node* temp = head;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<'\n';
}

//Remove the head of the the LL

Node* removeHead(Node* head){

    if(head == NULL) return head;

    Node* temp = head;
    //Increment the head
    head = head->next;

    //Completley deleting
    delete temp;

    return head;

};

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    //Converting to LL
    Node* head = convertLLToArray(arr);

    cout<<"Before Deleting the Head: ";
    traverseLL(head);

    Node* afterDeleting = removeHead(head);

    cout<<"After Deleting the Head: ";
    traverseLL(afterDeleting);
} 