#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>
#include "Bitacora.h"
#include "Algoritmos.h"

int main() {
    std::unordered_map<std::string,int> mapaMes{
            {"Jan",1},{"Feb",2},{"Mar",3},{"Apr",4},{"May",5},{"Jun",6}, {"Jul",7},{"Aug",8},{"Sep",9},{"Oct",10},{"Nov",11},{"Dec",12}
    };

    std::ifstream archivoEntrada("C:/Users/Guest/CLionProjects/ACT1.3/bitacora.txt");
    if (!archivoEntrada) {
        std::cout << "No se encuentra el archivo\n";
        return 1;
    }

    std::vector<std::pair<int,std::string>> registrosPonderados;

    std::string linea;

    while (std::getline(archivoEntrada, linea)) {
        std::istringstream flujoLinea(linea);
        std::string mesStr, diaStr, horaStr, ipStr, mensaje;
        std::getline(flujoLinea, mesStr, ' ');
        std::getline(flujoLinea, diaStr, ' ');
        std::getline(flujoLinea, horaStr, ' ');
        std::getline(flujoLinea, ipStr, ' ');
        std::getline(flujoLinea, mensaje);

        auto it = mapaMes.find(mesStr);
        int mes = it->second;

        int dia = std::stoi(diaStr);

        std::istringstream flujoHora(horaStr);
        std::string hStr, mStr, sStr;
        std::getline(flujoHora, hStr, ':');
        std::getline(flujoHora, mStr, ':');
        std::getline(flujoHora, sStr, ':');

        int hora = std::stoi(hStr);
        int minuto = std::stoi(mStr);
        int segundo = std::stoi(sStr);


        int fechaPonderada = mes * 100000000
                           + dia * 1000000
                           + hora * 10000
                           + minuto * 100
                           + segundo;

        registrosPonderados.emplace_back(fechaPonderada, linea);
    }

    Algoritmos algoritmos1;

    algoritmos1.ordenaMerge(registrosPonderados);

    for (int i=0; i < registrosPonderados.size(); i++) {
        std::cout << registrosPonderados[i].first << std::endl;
    }

    return 0;
}