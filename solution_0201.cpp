#include <iostream>

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

void removeDuplicates(LinkedListNode* head) {
	LinkedListNode* previous = head;
	LinkedListNode* probe = previous->next;
	LinkedListNode* runner = head;
	while (probe!=NULL) {
		runner = head;
		while (runner!=probe) {
			if (runner->val==probe->val) {
				previous->next = probe->next;
				probe = probe->next;
			}
			runner = runner->next;
		}
		previous = probe;
		probe = probe->next;
	}
}

int main() {
	LinkedListNode* head = new LinkedListNode(1);
	head->next = new LinkedListNode(1);
	head->next->next = new LinkedListNode(2);
	head->next->next->next = new LinkedListNode(3);
	head->next->next->next->next = new LinkedListNode(3);
	head->next->next->next->next->next = new LinkedListNode(4);
	printLinkedList(head);
	removeDuplicates(head);
	printLinkedList(head);
	return 0;
}
