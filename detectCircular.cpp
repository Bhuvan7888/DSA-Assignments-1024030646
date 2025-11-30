#include <iostream>
#include <unordered_map> // required for unordered_map
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

bool detectLoop(Node* head) {
    Node* curr = head;
    unordered_map<Node*, bool> visited;

    while (curr != NULL) {
        // If the node is already visited
        if (visited[curr] == true) {
            return true;
        }

        visited[curr] = true;
        curr = curr->next;
    }

    return false;
}

int main() {
    // Example usage:
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Create a loop for testing
    head->next->next->next = head->next;

    if (detectLoop(head))
        cout << "Loop detected\n";
    else
        cout << "No loop detected\n";

    return 0;
}