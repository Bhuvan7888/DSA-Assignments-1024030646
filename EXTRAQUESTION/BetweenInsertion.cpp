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
    Head = Tail = NULL;

    int arr[5] = {2,4,6,8,10};

    Head = createLinkedList(arr,0,5);

      int x = 3;//position to insert
    int value = 30;
    Node*temp = Head;
    x--;
while(x--){
    temp = temp->next;
};

Node*temp2 = new Node(value);
temp2->next = temp->next;
temp->next = temp2;


temp = Head;

while(temp){
    cout << temp->data << " ";
    temp = temp->next;
}

    return 0;
}