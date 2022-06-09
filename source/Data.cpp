#include "Data.h"

int Data::getRating() {
    return rating;
}

void Data::setRating(int rating) {
    Data::rating = rating;
}

std::string Data::getTitle()  {
    return title;
}

void Data::setTitle(std::string title) {
    Data::title = title;
}

void Data::print() {
    std::cout << "Rating: " << rating << ",title: "  << title << std::endl;
}

Data::Data(std::string line, std::string delimiter) {
    int pos = 0;
    std::string tmp;

    pos = line.find(delimiter);
    tmp = line.substr(0, pos);
    line.erase(0, pos + delimiter.length());

    pos = line.find(delimiter);
    tmp = line.substr(0, pos);
    line.erase(0, pos + delimiter.length());
    title = tmp;

    int position = line.find(delimiter);

    if (position != -1) {
      tmp = line.substr(0, position);
      line.erase(0, position + delimiter.length());
      title += tmp;
    }
    rating = atoi( tmp.c_str());
}
