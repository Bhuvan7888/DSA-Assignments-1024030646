#include<iostream>
using namespace std;

class Node{
    public:

    int data ;
    Node* next;

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

Node*deleteNode(Node*curr , int x){

    if(x==1){//case if we choose first element to delete
        Node*temp = curr->next;
        delete curr;
        return temp;
    }

    curr->next = deleteNode(curr->next , x-1);
    return curr;
}

int main() {

    Node * Head , *Tail;
    Head = NULL;

    int arr[5] = {2,4,6,8,10};

    Head = createLinkedList(arr,0,5);

    deleteNode(Head , 3);
  

Node *temp;
temp = Head;

while(temp){
    cout << temp->data << " ";
    temp = temp->next;
}

    return 0;
}
