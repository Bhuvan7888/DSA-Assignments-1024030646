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

listNode* middlenode(listNode* head){
   
    listNode *slow = head , *fast = head ;

    while(fast!=NULL && fast->next !=NULL){
        
        slow = slow->next;
        fast = fast->next->next;

    }

   return slow;

}

int main() {

    return 0;
}