#include "Driver.h"
#include <fstream>
#include <chrono>

void readData(List & list, std::string fileName, int size) {
    while (list.getSize() != size) {
        std::fstream file;
        file.open(fileName,std::ios::in);
        if (file.is_open()){
            std::string tmp;
            while(getline(file, tmp)){
                if (tmp[0] == ',' || tmp[tmp.length() -1] == ','){
                    continue;
                }
                Data m(tmp);
                list.add(m);
                if (list.getSize() == size){
                    file.close();
                    return;
                }
            }
            file.close();
        }
    }
}

Driver::Driver(std::string fileName, int size) {
  auto start = std::chrono::steady_clock::now();
    readData(list, fileName, size);
    auto end = std::chrono::steady_clock::now();
    auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "Wczytywanie z pliku | rozmiar: " << size << ", czas: " << time << " nanosekund" <<std::endl;
}

void Driver::quickSort() {
    auto start = std::chrono::steady_clock::now();
  list.quick();
    auto end = std::chrono::steady_clock::now();
    auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "Sortowanie | quick :  " << time << " nanosekund" <<std::endl;
}

void Driver::mergeSort() {
    auto start = std::chrono::steady_clock::now();
  list.merge();
    auto end = std::chrono::steady_clock::now();
    auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "Sortowanie | merge :  " << time << " nanosekund" <<std::endl;
}

void Driver::shellSort() {
    auto start = std::chrono::steady_clock::now();
  list.shell();
    auto end = std::chrono::steady_clock::now();
    auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "Sortowanie | shell :  " << time << " nanosekund" <<std::endl;
}

void Driver::show() {
    list.printList();
}

