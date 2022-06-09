#pragma once

#include "List.h"

class Driver {
public:
    Driver(std::string fileName, int size);

    void quickSort();
    void mergeSort();
    void shellSort();

    void show();

private:
  List list;
};