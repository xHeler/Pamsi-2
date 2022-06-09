#include "Node.h"

Node::Node(Data movie) {
    this->movie = movie;
    this->next = nullptr;
}

Data Node::getMovie(){
    return movie;
}

void Node::setMovie(Data &movie) {
    Node::movie = movie;
}

Node *Node::getNext(){
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}
