#ifndef CLASS_LIST_H
#define CLASS_LIST_H

#include "doubleNode.h"
#include <string>

using std::string;

class List {
	private:
		int amount;
		Node<string> *head;
		Node<string> *tail;
		void connect(Node<string> *inserted, Node<string> *sentry);

	public:
		List();
		~List();
		void insertOrdered(string text);
		void insertAtHead(string text);
		void insertAtTail(string text);
		void insertAfter(int index, string text);
		void removeAtHead();
		void removeAtTail();
		void removeAt(int index);
		void find(string value);
		void printList();
		int getAmount();
};

#endif