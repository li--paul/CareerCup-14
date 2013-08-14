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

int findNtoLast(LinkedListNode* head, int n) {
	LinkedListNode* p = head;
	LinkedListNode* q = head;
	for (int i=0;i<n;i++) {
	        q = q->next;
	}
	while (q!=NULL) {
	        p = p->next;
	        q = q->next;
	}
	return p->val;
}

int main() {
	LinkedListNode* head = new LinkedListNode(1);
	head->next = new LinkedListNode(1);
	head->next->next = new LinkedListNode(2);
	head->next->next->next = new LinkedListNode(3);
	head->next->next->next->next = new LinkedListNode(3);
	head->next->next->next->next->next = new LinkedListNode(4);
	printLinkedList(head);
	cout << findNtoLast(head,3) << endl;
	cout << findNtoLast(head,4) << endl;
	return 0;
}
