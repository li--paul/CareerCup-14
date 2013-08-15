#include <iostream>

using namespace std;

class LinkedListNode {
public:
	int val;
	LinkedListNode* next;
	LinkedListNode(int d) {
		val = d;
		next = NULL;
	}
};

void printLinkedList(LinkedListNode* head) {
	while (head!=NULL) {
		cout << head->val << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}

int findLoopStart(LinkedListNode* head) {
	LinkedListNode* p1 = head;
	LinkedListNode* p2 = head;
	p1 = p1->next;
	p2 = p2->next->next;
	while (p1!=p2) {
	        p1 = p1->next;
	        p2 = p2->next->next;
	}
	p1 = head;
	while (p1!=p2) {
	        p1 = p1->next;
	        p2 = p2->next;
        }
        return p1->val;
}

int main() {
	LinkedListNode* h1 = new LinkedListNode(1);
	h1->next = new LinkedListNode(2);
	h1->next->next = new LinkedListNode(3);
	h1->next->next->next = new LinkedListNode(4);
	h1->next->next->next->next = new LinkedListNode(5);
	h1->next->next->next->next->next = h1->next->next;

        cout << findLoopStart(h1) << endl;
        
	return 0;
}
