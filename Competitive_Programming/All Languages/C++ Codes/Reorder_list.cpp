#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void reorderList(struct Node* head);

/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }

        reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}
// } Driver Code Ends

void reorderList(struct Node* head) {
    int r = 0, c;
    struct Node* temp, *temp1, *temp2, *p;
    temp = head;

    // if list contains 2 or lesser nodes, no change needed
    if (head == NULL || head->next == NULL || head->next->next == NULL) return;

    while (temp != NULL) {
        // finding number of nodes in list
        r++;
        temp = temp->next;
    }

    c = (r + 1) / 2;
    // c represents mid point

    temp = head;
    while (c--) {
        p = temp;
        temp = temp->next;
    }

    p->next = NULL;
    // dividing the list into 2
    // temp holds the address to head of second half

    temp1 = NULL;
    temp2 = temp;

    // reversing the second half
    while (temp2 != NULL) {
        p = temp2->next;
        temp2->next = temp1;
        temp1 = temp2;
        temp2 = p;
    }
    // second half is now reversed

    p = temp1;
    // merging the 2 halves by selecting nodes
    // alternatively
    while (r--) {
        temp = p;
        p = head->next;
        head->next = temp;

        head = head->next;
    }

}
