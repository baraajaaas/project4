#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h> 
#include "LinkedList.h"
using namespace std;


class hashtable{

protected:
	static const int SIZE = 97;
	LinkedList Hash[SIZE];
	int hash(string key);

	//look into
	Node* head;
	Node* Next;

public:
	hashtable();
	~hashtable();
	LinkedList* searchOne(string key);
	Node* searchR(string key);
	void insertOne(string key, string value);
	void insert(string key, string value);
	void removeOne(string key, string value);
	void remove(string key);
	void print();
	
};
