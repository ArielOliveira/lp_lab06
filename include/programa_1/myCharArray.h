#ifndef MY_CHAR_ARRAY_H
#define MY_CHAR_ARRAY_H

#include <string>
#include "stack.h"

using std::string;

class myCharArray {
	private:
		char *c;
		int size;
		void charInit();
	public:
		myCharArray(int size);
		~myCharArray();
		void makeLow();
		void toChar(string& word);
		char* getCharPointer();
		bool isPalindrome(Stack<char> &stack);
};

#endif