#ifndef STACK_H
#define STACK_H

struct Node {
	char *word;
	Node *next;
};

class Stack {
	private:
		int size;
		struct node *edge;
		void wordInit(char *word);

	public:
		Stack(int size);
		~Stack();
		void push(char c);
		void showWord();
		void pop();
		char top();
		char getChar();
		int getSize();

};

#endif