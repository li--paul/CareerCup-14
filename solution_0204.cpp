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

LinkedListNode* addLists(LinkedListNode* a, LinkedListNode* b) {
	if (a==NULL) return b;
	if (b==NULL) return a;
	LinkedListNode* head = new LinkedListNode((a->val+b->val)%10);
	bool carry = (a->val+b->val)>9;
	LinkedListNode* r = head;
	a = a->next;
	b = b->next;
	while (a!=NULL || b!=NULL) {
		int sum = carry;
		if (a!=NULL) {sum += a->val;a = a->next;}
		if (b!=NULL) {sum += b->val;b = b->next;}
		carry = sum>9;
		r->next = new LinkedListNode(sum%10);
		r = r->next;
	}
	if (carry) r->next = new LinkedListNode(1);
	return head;
}

int main() {
	LinkedListNode* h1 = new LinkedListNode(3);
	h1->next = new LinkedListNode(1);
	h1->next->next = new LinkedListNode(5);
	h1->next->next->next = new LinkedListNode(9);
	LinkedListNode* h2 = new LinkedListNode(5);
	h2->next = new LinkedListNode(9);
	h2->next->next = new LinkedListNode(5);	
	printLinkedList(h1);
	printLinkedList(h2);
	printLinkedList(addLists(h1,h2));
	return 0;
}
