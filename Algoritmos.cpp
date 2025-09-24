//
// Created by Guest on 24/09/2025.
//

#include "Algoritmos.h"

void Algoritmos::merge(int inicio,int centro, int final, std::vector<std::pair<int, std::string>> &v) {
    int i = 0, j = 0, k = inicio;

    int izq = centro - inicio + 1;
    int der = final - centro;

    std::vector<std::pair<int,std::string>> izquierda(izq);

    std::vector<std::pair<int,std::string>> derecha(der);

    for(int i=0;i<izq;i++) {
        izquierda[i] = v[inicio+i];
    }
    for (int i=0;i<der;i++) {
        derecha[i] = v[centro+1+i];
    }
    while(i<izq && j<der) {
        if(izquierda[i].first<=derecha[j].first) {
            v[k] = izquierda[i];
            i++;
        }else {
            v[k] = derecha[j];
            j++;
        }
        k++;
    }
    while(i<izq) {
        v[k] = izquierda[i];
        i++;
        k++;
    }
    while(j<der) {
        v[k] = derecha[j];
        j++;
        k++;
    }
}

void Algoritmos::mergeSort(int inicio, int final, std::vector<std::pair<int,std::string>>&v) {

    int comp = 0;

    if (inicio < final) {
        int centro = (inicio+final)/2;
        mergeSort(inicio, centro, v);
        mergeSort(centro+1,final, v);
        merge(inicio, centro, final, v);
    }
}

void Algoritmos::ordenaMerge(std::vector<std::pair<int, std::string>> &v) {
    mergeSort(0, (v.size())-1, v);           //Complejidad O(n log n)
}
