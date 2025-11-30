#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* createLinkedList(int arr[] , int index , int size){
    //base case
    if(index==size){
        return NULL;
    }

    Node*temp;
    temp = new Node(arr[index]);// new node made for an index
    temp ->next = createLinkedList(arr , index+1 , size);//next ka address de dega

    return temp;
}


int main() {

    Node * Head , *Tail;
    Head = NULL;

    int arr[5] = {2,4,6,8,10};

    Head = createLinkedList(arr,0,5);
   
    if(Head->next==NULL){
        //only one Node is present
        Node*temp;
        delete temp;
        Head = NULL;
    }
    //more than 1 node present
    else{
        Node*curr = Head;
        Node*prev = NULL;

        // curr->next is not NULL

        while(curr->next!=NULL){
            prev = curr;
            curr = curr->next;

        }
        prev->next = curr->next;
        delete curr;
    }

Node *temp;
temp = Head;

while(temp){
    cout << temp->data << " ";
    temp = temp->next;
}

    return 0;
}