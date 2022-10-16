#include <iostream>

using namespace std;

class Node {
    public:
        Node *next = NULL;
        int value;
        Node(int val) {
            value = val;
        }
};

class SLL {
    private:
        Node *head = NULL;

    public:
        void append(int val) {
            Node *c = head;
            Node *newnode = new Node(val);
            Node *previous;

            if (!c) {
                head = newnode;
            } else {
                while (true) {
                    if (c == NULL) {
                        break;
                    }
                    previous = c;
                    c = c->next;
                }
                previous->next = newnode;
            }
            delete c;
        }

        int length() {
            Node *c = head;
            int count = 0;
            while (true) {
                if (c == NULL) {
                    break;
                }
                c = c->next;
                count++;
            }
            delete c;
            return count;
        }

        Node getHead() {
            return *head;
        }

        Node getNode(int index) {
            if (index > length()) {
                throw "IndexError: index out of range";
            }
            Node *c = head;
            for (int i = 0; i < index; i++) {
                c = c->next;
            }
            return *c;
        }

        void delNode(int index) {
            if (index > length()) {
                throw "IndexError: index out of range";
            } else if (!index) {
                head = NULL;
                return;
            } else if (index < -length()) {
                throw "IndexError: index out of range";
            } else if (index < 0) {
                index += length();
            }
            Node *c = head;
            Node *prevNode;
            for (int i = 0; i < index; i++) {
                if (i == index-1) {
                    prevNode = c;
                }
                c = c->next;
            }
            prevNode->next = c->next;
            delete c;
        }

        void show() {
            Node *c = head;
            while (true) {
                if (c == NULL) {
                    break;
                }
                cout << c->value << ", ";
                c = c->next;
            }
            cout << "\n";
            delete c;
            return;
        }
};

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    SLL sll = SLL();
    sll.append(1);
    sll.append(2);
    sll.append(3);
    sll.show();
    Node headNode = sll.getHead();
    cout << headNode.value << "\n";
    cout << sll.length() << endl;
    sll.delNode(1);
    sll.show();
    Node test = sll.getNode(1);
    cout << test.value;
    return 0;
}
