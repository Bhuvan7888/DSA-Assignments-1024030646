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
    vector<int>ans;
    listNode *temp = head;

    while(temp!=NULL){
        ans.push_back(temp->val);
        temp = temp->next;
    };

    int i = ans.size() - 1;
    temp = head;

    while(temp){
        temp ->val = ans[i];
        i--;
        temp = temp->next;
    }

    return head;


}

int main() {

    return 0;
}