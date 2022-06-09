#pragma once
#include <iostream>

class Data {
public:
    Data() = default;
    Data(std::string line,  std::string delimiter = ",");

    int getRating();
    std::string getTitle();
    void setRating(int rating);
    void setTitle(std::string title);
    void print();

private:
  int rating;
  std::string title;
};