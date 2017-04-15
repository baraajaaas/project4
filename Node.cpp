#include "node.h"
Node::Node(){

}
Node::~Node(){

}
Node::Node(string w, Node *n){
	word = w;
	next = n;
}
void Node::setNext(Node* n){
	next = n;
}
Node* Node::getNext(){
	return next;
}
void Node::setWord(string w){
	word = w;
}
string Node::getWord(){
	return word;
}