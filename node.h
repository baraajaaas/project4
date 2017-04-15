#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Node{
public:
	Node();
	~Node();
	Node(string word, Node *n);
	void setNext(Node* n);
	Node* getNext();
	void setWord(string w);
	string getWord();


private:
	string word;
	Node* next;

};