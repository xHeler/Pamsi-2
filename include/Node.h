#pragma once

#include "Data.h"

class Node {
private:
    Data movie;
    Node* next;
public:
    Node(Data movie);

    Data getMovie();

    void setMovie(Data &movie);

    Node *getNext();

    void setNext(Node *next);
};