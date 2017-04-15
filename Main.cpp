#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream>
#include "hash.h"
#include "node.h"
#include <vector>
using namespace std;
 
int main(){
	string key, replace, sub;
	stringstream s;
	//Node* Arr[97];
	 //vector<string>arr;
	 hashtable table;
	 string Line;

	ifstream in;
	string text;
	/*
	cout << "Which file would you like to open?" << endl;
	cin >> text;
	in.open(text);
	while(in.fail()){
		cout << "There is no file" << endl;
		cin >> text;
		in.open(text);
	}
	while (!in.eof()) {
		while (getline(in, key, ':')) {
			getline(in, Line);
			stringstream s(Line);
			cout << "key = " << key << endl;
			while (getline(s, replace, '|')) {
			  cout << "replace = " << replace << endl;
				table.insert(key, replace);
			}
		}
	}
	
	in.close();
			// get the index of the key from the hash function			
		
	table.print();
	*/

	
	hashtable test;

	test.insert("<Start>", "<Sentence>");
	test.insert("<Sentence>","<Actor> <Verb> <Actor>");
	test.insert("<Sentence>","<Sentence> and <Sentence>");
	test.insert("<Actor>", "the boy");
	test.insert("<Actor>", "the girl");
	test.insert("<Actor>", "a postman");
	test.insert("<Actor>", "the librarian");

	test.insert("<Verb>", "kicked");
	test.insert("<Verb>", "waved to");
	test.insert("<Verb>", "laughed at");
	test.insert("<Verb>", "annoyed");

	test.insert("<Actor>", "the programmer");
	test.insert("<Actor>", "the engineer");
	test.insert("<Actor>", "a scientist");
	test.insert("<Actor>", "an aborist");

	test.insert("<Adjective>", "fat");
	test.insert("<Adjective>", "long");
	test.insert("<Adjective>", "short");
	test.insert("<Adjective>", "clean");
	test.insert("<Adjective>", "big");
	test.insert("<Adjective>", "huge");
	test.insert("<Adjective>", "small");
	test.insert("<Adjective>", "tiny");


	//	test.print();

	
	cout << "what word would you like  search for?" << endl;
	//LinkedList* result = test.searchOne("<Actor>");
	Node* result =test.searchR("<Actor>");
	cout << result->getWord() << endl;

	//cout << "What word would you like to remove?" << endl;
	// test.removeOne("<Adjective>");
	//test.remove("<Adjective>");
	
	//test.print();

	
	//cout << "What word would you like to insert?" << endl;
	//test.insertOne("<Verb>", "cries");
	//	test.print();
	
	//	system("PAUSE");
	return 0;
}
	//table.print();




