// Author: Jacob Barajas
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


string clear_spaces(string str){

  size_t endpos = str.find_last_not_of(" \t");
  if( string::npos != endpos ){
    str = str.substr( 0, endpos+1 );
  }

  size_t startpos = str.find_first_not_of(" \t");
  if( string::npos != startpos ){
    str = str.substr( startpos );
  }
 
  return str;
}
 
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
	
	//	cout << "Which file would you like to open?" << endl;
	//	cin >> text;
	in.open("grammar_mac.txt");
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
	      table.insert(clear_spaces(key), clear_spaces(replace));
	    }
	}
	
	
	in.close();			
		
	table.print();

	
       	cout << "How would you like to search?"  << endl;
	cout << "one" << endl;
	cout << "random" << endl;
	cin >> choice;
	cout << "what key would you like to search?" << endl;
	cin >> choice2;
	
	
	if (choice == "one"){
	  LinkedList* result = table.searchOne(choice2);
	  result->print();
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
        cout << "Please enter the key and word you would like to remove" << endl;
	cin >> choice2;
	//	cin >> choice3;
	cin.ignore();
	getline(cin, choice3);
	table.removeOne(choice2, choice3);
	  table.print();
	}
	else{
	  cout << "Please enter the key you would like to remove." << endl;
	  table.remove(choice2);
	
		table.print();
	}
	
	cout << "What key would you like to insert?" << endl;
	cin >> choice;
  
	cout << "What word would you like to put in?" << endl;
        //	cin >> choice2;

        cin.ignore();
	getline(cin,choice2);					 
	table.insertOne(choice, choice2);
	table.print();
       
	
	
	system("PAUSE");
	return 0;
}




