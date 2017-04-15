#include "hash.h"


hashtable::hashtable(){

}
hashtable::~hashtable(){
	
}
int hashtable::hash(string key){
	int x = 0;
	for (int i = 0; i < key.length(); i++) {
		x += key[i];
	}
	return x % SIZE;

}
LinkedList* hashtable::searchOne(string key){
	int index = hash(key);
	

	return &Hash[index];
       
}

Node* hashtable::searchR(string key){
	int index = hash(key);

	srand(time(NULL));
	int moves = 0;
	if(Hash[index].gethead() == NULL){
	  cout << "The spot in the table is empty" << endl;
		return NULL;
	}
	else{
	  Node* temp = Hash[index].gethead();
		while(temp != NULL){
			temp = temp->getNext();
			moves++;
		}
	
		int randNum = rand() % moves;
		cout << "randNum = " << randNum << " moves = " << moves << endl;
		temp = Hash[index].gethead();
		for (int i = 0; i < randNum - 1; i++){
			temp = temp->getNext();
		}
		return temp;

	}
}

void hashtable::insertOne(string key, string value){
      
	int index = hash(key);

	Hash[index].insert(value);
}

void hashtable::insert(string key, string value){
	int index = hash(key);
	Hash[index].insert(value);
}

void hashtable::removeOne(string key, string value){
   int index = hash(key);
   Hash[index].remove(value);

}

void hashtable::remove(string key){
  	int index = hash(key);
  	Hash[index].~LinkedList();
  	Hash[index] = LinkedList();

}
void hashtable::print(){
	for(int i = 0; i < SIZE; i++){
		if(Hash[i].gethead() != NULL){
		  cout << i << ": ";
		  Hash[i].print();
		}
	}
}
