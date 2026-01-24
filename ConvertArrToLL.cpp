//You are given an array. Write a function to convert it to LL and return the starting point of the LL

#include<bits/stdc++.h>
using namespace std;

//Defininng the Node Str of the LL

class Node{

    public: 
        int data;
        Node* next;

    public:
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }
    public:

        //This constructor ensures we dont need to pass nullptr everytime
        Node(int data1){
            data = data1;
            next = nullptr;
    }

};

//Function to convert the array to LL

Node* convertArrayToLL(vector<int>& arr){
    int n = arr.size();

    //Defining the pointer to the head of the LL
    Node* head = new Node(arr[0]);

    //Initialising a mover that initially stays at the first position
    Node* mover = head;

    //Traversing the array and adding new nodes

    for(int i = 1; i<n; i++){
        //Adding new nodes
        Node* successiveNodes = new Node(arr[i]);
        //Mover will now store the memory address to the next node
        mover->next = successiveNodes;

        //Taking the mover forward
        mover = successiveNodes;
    }

    return head;

};

int main(){
    vector<int> arr = {2, 5, 8, 10, 22};
    Node* head = convertArrayToLL(arr);

    cout<<head->data;

}