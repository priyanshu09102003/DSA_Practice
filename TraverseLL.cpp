//Traverse an entire LL

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

Node* convertArrToLL(vector<int>& arr){
    int n = arr.size();
    Node* head = new Node(arr[0]); //Setting the first element of the array as the head of the LinkedList
    Node* mover = head; //Random mover pointer that first points to the head

    for(int i = 1; i<n; i++){
        //Store the values in succesive nodes

        Node* succesiveNodes = new Node(arr[i]);

        //Link the mover pointer to the next node
        mover->next = succesiveNodes;

        //Increment the mover
        mover = succesiveNodes;
    };

    return head;
};

int main(){
    vector<int> arr= {2, 4, 6, 8, 10, 12, 14, 16, 18};

    Node* head = convertArrToLL(arr);
    Node* temp = head;

    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    } 
}