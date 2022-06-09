#pragma once
#include "Node.h"

class List {
public:
    List();
    void add(Data movie);
    void printList();
    void quick();
    void merge();
    void shell();
    int getSize() const;
    Data operator[](int index);
    void setMovieAtIndex(Data m, int index);

private:
  int size;
  Node* head = nullptr;
  Node* tail = nullptr;
};


