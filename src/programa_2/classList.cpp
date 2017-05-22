#include <iostream>
#include "classList.h"

List::List() {
	amount = 0;
	head = new Node<string> {"Começo", nullptr, nullptr};
	tail = new Node<string> {"Fim", nullptr, nullptr};

	head->next = tail;
	tail->previous = head;
}

void List::insertAtHead(string text) {
	Node<string> *inserted = new Node<string> {text, nullptr, nullptr};
	Node<string> *h = this->head;

	h->next->previous = inserted;
	inserted->next = h->next;

	h->next = inserted;
	inserted->previous = h;

	this->amount++;
}

void List::connect(Node<string> *inserted, Node<string> *sentry) {
	inserted->previous = sentry->previous;
	sentry->previous->next = inserted;
	inserted->next = sentry;
	sentry->previous = inserted;
}

void List::insertAfter(int index, string text) {
	if (index > amount || index < 0) {
		std::cout << "Impossível inserir. Posição fora da lista" << std::endl;
		return;
	}

	Node<string> *inserted = new Node<string> {text, nullptr, nullptr};
	Node<string> *sentry;

	if (index > amount/2) {
		sentry = tail->previous;
		for (int count = amount; count > index; count--) {
			sentry = sentry->previous;
		}
	} else {
		sentry = head->next;
		for (int count = 0; count < index; count++) {
			sentry = sentry->next;
		}

	}

	connect(inserted, sentry);
	amount++;

}

void List::insertOrdered(string text) {
	Node<string> *inserted = new Node<string> {text, nullptr, nullptr};
	Node<string> *sentry = head->next;
	while ((sentry != tail) && (sentry->data < inserted->data)) {
		sentry = sentry->next;
	}
	
	inserted->next = sentry;
	inserted->previous = sentry->previous;
	sentry->previous->next = inserted;
	sentry->previous = inserted;
}

void List::printList() {
	Node<string> *runner = head;
	while((runner = runner->next)) {
		std::cout << runner->data << std::endl;
	}
}

List::~List() {}

