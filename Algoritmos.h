//
// Created by Guest on 24/09/2025.
//

#ifndef ACT1_3_ALGORITMOS_H
#define ACT1_3_ALGORITMOS_H
#include <string>
#include <vector>
#include <iostream>


class Algoritmos {




    void merge(int inicio,int centro, int final, std::vector<std::pair<int, std::string>> &v);
    void mergeSort(int inicio, int final, std::vector<std::pair<int, std::string>> &v);

public:

    Algoritmos();
    void ordenaMerge(std::vector<std::pair<int, std::string>> &v);

};


#endif //ACT1_3_ALGORITMOS_H