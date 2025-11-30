#include<iostream>
#include<vector>
using namespace std;

class listNode{

    public:
    int val;
    listNode*next;

    listNode(int data){
        val = data;
        next = NULL;
    }

};

listNode* rotateRight(listNode* head , int k){
   
    if(head == NULL || head->next == NULL)
    return head;
    

    int count = 0;
    listNode *temp = head;
    while(temp){
        count ++;
        temp = temp->next;
    }

    k = k%count;
    count -= k;
    listNode*curr = head , *prev = NULL;
    while(count--){
        prev = curr;
        curr = curr->next;
    };

    prev->next = NULL;
    listNode*tail = curr;

    while(tail->next!=NULL){
        tail = tail->next;
    }

    tail->next = head;

    head = curr;
    return head;


}

int main() {

    return 0;
}