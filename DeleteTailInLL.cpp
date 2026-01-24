//Given a linkedlist. Delete the TAIL of the LL

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

//Convert the arr to LL

Node* convertToLL(vector<int>& arr){
    int n = arr.size();

    Node* head = new Node(arr[0]);
    Node* mover = head;


    for(int i = 1; i<n; i++){
        Node* nextNode = new Node(arr[i]);
        mover->next = nextNode;
        mover = nextNode;
    }

    return head;
};

//Print the LL

void printLL(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<'\n';
}

//Delete Tail of the LL

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;

    Node* temp = head;

    //Go upto second last element
    while(temp->next->next != nullptr){
        temp = temp->next;
    }

    //If it reaches the seoncd last element, delete the last element(actual Tail) and point the second last elem to nullPtr(becomes the new Tail)

    delete temp->next;
    temp->next = nullptr;

    return head;
};


int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};

    Node* actualHead = convertToLL(arr);
    cout<<"Before deleting the tail: ";
    printLL(actualHead);

    Node* removeTail = deleteTail(actualHead);
    cout<<"After deleting the tail: ";
    printLL(removeTail);
}