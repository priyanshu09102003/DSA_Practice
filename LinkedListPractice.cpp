//BASIC CRUD Operations in LINKEDLIST

#include<bits/stdc++.h>
using namespace std;

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
        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

//Converting the array to LinkedList

Node* convertArrToLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    int n = arr.size();

    for(int i = 1; i<n; i++){
        Node* newNode = new Node(arr[i]);
        mover->next = newNode;
        mover = newNode;
    }

    return head;
};

//Printing the linkedList(Traversal)

void printLL(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<'\n';
};


//DELETION OF NODES IN LINKED LIST

//1) Delete Head

Node* deleteHeadofLL(Node* head){
    //First take a backup of the head
    Node* temp = head;

    //make the next element the head
    head = head->next;

    //free the previous head
    delete temp;

    return head;
}

//2)  Delete the Tail

Node* deleteTailofLL(Node* head){
    //If the LL is empty or only head is present

    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }

    //If the next element of second last points to nullptr
    delete temp->next;
    temp->next = nullptr;

    return head;
}

//3) Delete at kth position

Node* deleteAtKposition(Node* head, int k){
    if(head == NULL){
        return NULL;
    }

    //if k=1(delete head)

    if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;

        return head;
    }

    //if k=any random number

    int count = 0;
    Node* temp = head;
    Node* prev = NULL;
    

    while(temp != nullptr){
        count++;

        if(count == k){
            prev->next = prev->next->next;
            delete temp;

            break;
        }

        prev = temp;
        temp = temp->next;
    }

    return head;
}



int main(){
    vector<int> arr = {2,4,6,8,10,12,14};

    Node* head = convertArrToLL(arr);

    cout<<"The linkedList is: ";
    printLL(head);

    //Delete Head

    // Node* newHead = deleteHeadofLL(head);
    // cout<<"After deleting the head of LL: " ;
    // printLL(newHead);


    //Delete the Tail of the LL

    // Node* newHead = deleteTailofLL(head);
    // cout<<"After deleting the tail of the LL: ";
    // printLL(newHead);


    //Delete at any Kth


}

