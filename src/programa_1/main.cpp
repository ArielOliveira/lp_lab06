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
	Stack<char> stack(word.length());
	int a = word.length();
	myCharArray charArray(a);

	//charArray.toChar(word);
	//charArray.makeLow();
	//toStack(stack, charArray.getCharPointer(), word.length());

	//cout << charArray.isPalindrome(stack) << endl;

	return 0;
}