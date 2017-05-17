#include <iostream>
#include "stack.h"

void Stack::wordInit(char *word) {
	for (int i = 0; i < this->size; i++) {
		word[i] = 0;
	}
	word[--this->size] = nullptr;
}

Stack::Stack(int size) {
	this->size = size;
	this->word = new char[size+1];
	this->wordInit(word);
	this->charPointer = word;
}

void Stack::push(char c) {
	unsigned int index = sizeof(word) / sizeof(char);
	if (index < (unsigned int)this->size) {
		*this->word = c;
		++this->word;
	} else {
		std::cout << "StackOverflow!" << std::endl;
	}
}

void Stack::pop() {
	this->word[--size] = nullptr;
	this->word--;
}

void Stack::showWord() {
	for (int i = 0; i < size; i++) {
		std::cout << this->word[i];
	}
	std::cout << std::endl;
}

char Stack::getChar() {
	int index = (unsigned int)(this->charPointer - this->word);
	index = index%size;
	std::cout << index << std::endl;
	this->charPointer++;
	return this->word[index];
}

int Stack::getSize() {
	return this->size;
}


Stack::~Stack() {}
