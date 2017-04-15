#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include "node.h"
using namespace std;


class LinkedList
{
private:
	string key;
	Node* head;

public:
	LinkedList();
	LinkedList(const LinkedList& other);
	~LinkedList();
	void sethead(Node* h);
	Node* gethead() const;
	LinkedList(string L);
	void print();
	void prepend(string L);
	void insert(string L);
	Node *search(string L);
	void remove(string L);
	void pop();


	/*void setKey(string k);
	string getKey();*/
};
