#include <iostream>
#include <string>
#include "stack.h"
#include "myCharArray.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;


void toStack(Stack<char> &stack, char *c, int size) {
	for (int i = 0; i < size; i++) {
		if (c[i] >= 97 && c[i] <= 122) {
			stack.push(c[i]);
		}
	}
	cout << endl;
}

int main() {
	string word;
	getline(cin, word, '\n');
	cout << word.length() << endl;
	Stack<char> stack(word.length());
	myCharArray charArray(word.length());
	

	charArray.toChar(word);
	charArray.makeLow();
	char* c = charArray.getChar();
	toStack(stack, c, word.length());
	delete[] c;
	if (charArray.isPalindrome(stack)) {
		cout << "É palíndromo" << endl;	
	} else {
		cout << "Não é palíndromo" << endl;	
	}
	

	return 0;
}