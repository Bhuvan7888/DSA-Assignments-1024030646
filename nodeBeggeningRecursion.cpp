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

Node* createLinkedList(int arr[] , int index , int size , Node* prev){
    //base case
    if(index==size){
        return prev;
    }

    Node*temp;
    temp = new Node(arr[index]);// new node made for an index
    temp ->next = prev;
    return createLinkedList(arr , index+1 , size , temp);//next ka address de dega

    
}


int main() {

    Node * Head , *Tail;
    Head = Tail = NULL;

    int arr[5] = {2,4,6,8,10};

    Head = createLinkedList(arr,0,5,Head);

Node *temp;
temp = Head;

while(temp){
    cout << temp->data << " ";
    temp = temp->next;
}

    return 0;
}