#include "LinkedList.h"
LinkedList::LinkedList(){
	head = NULL;
}

LinkedList::LinkedList(const LinkedList& other){
  head = other.gethead();

}

LinkedList::~LinkedList(){
	Node *discard;
	while (head != NULL) {
		discard = head;
		head = head->getNext();
		delete discard;
	}
}
void LinkedList::sethead(Node* h){
	head = h;
}
Node* LinkedList::gethead() const{
	return head;
}

LinkedList::LinkedList(string L){
	head = new Node(L, NULL);
}

void LinkedList::pop(){
  if (head != NULL){
    Node* temp = head;
    head = head->getNext();
    delete temp;
  }
}

void LinkedList::print()
{
	Node *ptr = head;
	cout << "Printing node\n";
	cout << "{ ";
	while (ptr != NULL) {
		cout << ptr->getWord() << ", ";
		ptr = ptr->getNext();
	}
	cout << " }" << endl;
}

void LinkedList::prepend(string L)
{
	Node *temp = new Node(L, NULL);
	temp->setNext(head);
	head = temp;

}

void LinkedList::insert(string L)
{
	if (head == NULL) {
	  head = new Node(L, NULL);
	}
	else{
	  Node* temp = head;
	  head = new Node(L, temp);
	}
}

Node* LinkedList::search(string L)
{
	Node *ptr = head;
	while (ptr != NULL) {
		if(ptr->getWord() == L){
			return ptr;
		}
		ptr = ptr->getNext();
	}
	return nullptr;
}

void LinkedList::remove(string L)
{
	if (head == NULL) {
		return;
	}
	else if (head->getWord() == L) {
		Node *temp = head;
		head = head->getNext();
		delete temp;
	}
	else {
		Node *ptr = head;
		while (ptr->getNext() != NULL) {
			if (ptr->getNext()->getWord() == L) {
				Node *temp = ptr->getNext();
				ptr->setNext(temp->getNext());
				delete temp;
				return;
			}
			ptr = ptr->getNext();
		}
	}
}


/*void setKey(string k){
	key = k;
}
string getKey(){
	return key;
}*/
