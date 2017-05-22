#ifndef DOUBLE_NODE_H
#define DOUBLE_NODE_H

#include <string>
using std::string;

template<typename T>
struct Node {
	T data;
	Node *next;
	Node *previous;
};

#endif