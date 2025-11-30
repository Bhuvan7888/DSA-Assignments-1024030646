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

listNode* reverselist(listNode* curr , listNode* prev){

    if(curr == NULL){
        return prev;

        listNode* fut = curr->next;
        curr->next = prev;
        return reverselist(fut , curr);
    }
   
    }

    listNode* reverse(listNode* head){
        return reverselist(head , NULL);
    }



int main() {

    

    return 0;
}