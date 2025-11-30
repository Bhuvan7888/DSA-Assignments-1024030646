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

listNode* reverselist(listNode* head){
   
    listNode *curr = head , *prev = NULL , *fut = NULL;

    while(curr){
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    };

    head = prev;//last me aake jab reverse ho jayega uss same prev ban jayega wo 
    return;

}

int main() {

    return 0;
}