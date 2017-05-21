#include <iostream>
#include "myCharArray.h"

using std::cin;
using std::cout;
using std::endl;

void myCharArray::charInit() {
	for (int i = 0; i < size; i++) {
		c[i] = 0;
	}
}

myCharArray::myCharArray(int size) {
	this->size = size;
	c = new char[size];
	charInit();
}

bool myCharArray::isPalindrome(Stack<char> &stack) {
	int matchs = 0, size = stack.getSize();
	char a;
	while ((a = stack.top())) {
		if (!(*c >= 97 && *c <= 122)) c++;
		else if (*c == a) {
			stack.pop();
			c++;
			matchs++;	
		} else {
			stack.pop();
			c++;
		}
	}
	if (matchs == size) return true;
	return false;
}

void myCharArray::toChar(string& word) {
	for (unsigned int i = 0; i < word.length(); i++) {
		c[i] = word.at(i);
	}
	c[word.length()] = '\0';
}

void myCharArray::makeLow() {
	for (int i = 0; i < size; i++) {
		if (c[i] >= 65 && c[i] <= 90) c[i] += 32;	
	}
}

char* myCharArray::getCharPointer() {
	return c;
}

myCharArray::~myCharArray() {}