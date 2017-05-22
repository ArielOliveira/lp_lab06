#include <iostream>
#include "classList.h"

using std::cout;
using std::endl;

int main() { 
	
	List list;
	list.insertAtHead("head");
	list.insertOrdered("orderedString");
	list.insertAtHead("atHead");
	list.insertAfter(2, "after");
	list.insertAfter(2, "its2now");
	list.printList();

	/*
	Node *head = new Node {"0", nullptr, nullptr};
	Node *tail = new Node {"0", nullptr, nullptr};

	Node *inserted = new Node {"entrei", nullptr, nullptr};


	insertBegin(inserted, head);

	cout << head->next->info << endl;
	cout << tail->previous->info << endl;
	cout << head->next->previous->info << endl;
	*/
}
