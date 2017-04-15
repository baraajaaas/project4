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
       
        hashtable table;
        string Line;

	ifstream in;
	string text;
	string choice;
	string choice2;
	string choice3;
	
	cout << "Which file would you like to open?" << endl;
	cin >> text;
	in.open(text);
	while(in.fail()){
		cout << "There is no file" << endl;
		cin >> text;
		in.open(text);
	}
	while (!in.eof()) {
	  getline(in, Line, '\n');
	  stringstream s(Line);
	  getline(s, key, ':');
	  cout << "Key: " << key << endl;

	    while (getline(s, replace, '|')) {
	      table.insert(key, replace);
	    }
	}
	
	
	in.close();			
		
	table.print();
       	cout << "How would you like to search?"  << endl;
	cout << "one" << endl;
	cout << "random" << endl;
	cin >> choice;
	cout << "what word would you like to search?" << endl;
	cin >> choice2;
	//	cin >> choice3;
	
	if (choice == "one"){
	  LinkedList* result = table.searchOne(choice2);
	table.print();
	}
	else{
       	Node* result =table.searchR(choice2);
       	cout << (result == NULL ?  string("Nothing") : result->getWord()) << endl;
	}

	
	cout << "How would you like to remove?" << endl;
	cout << "one" << endl;
	cout << "entire" << endl;
	cin >> choice;
	
	if(choice == "one"){
        cout << "What word would like to remove" << endl;
	cin >> choice2;
	cin >> choice3; 
	table.removeOne(choice2, choice3);
	  table.print();
	}
	else{
	  table.remove(choice2);
	
		table.print();
	}
	
	cout << "What word type of would would  you like to insert?" << endl;
	cout << "Actor, Verb, Adjective" << endl;

	cin >> choice;
	cout << "What word would you like to put in?" << endl;
	cin >> choice2;
	table.insertOne(choice2, choice3);
	table.print();
	
	system("PAUSE");
	return 0;
}




