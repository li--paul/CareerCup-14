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

void deleteNode(LinkedListNode* d) {
	if (d==NULL||d->next==NULL) return;
	d->val = d->next->val;
	d->next = d->next->next;
}

int main() {
	LinkedListNode* head = new LinkedListNode(1);
	head->next = new LinkedListNode(1);
	head->next->next = new LinkedListNode(2);
	head->next->next->next = new LinkedListNode(3);
	head->next->next->next->next = new LinkedListNode(3);
	head->next->next->next->next->next = new LinkedListNode(4);
	printLinkedList(head);
	deleteNode(head->next->next);
	printLinkedList(head);
	return 0;
}
