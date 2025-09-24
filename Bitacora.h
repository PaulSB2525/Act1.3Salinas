//
// Created by Guest on 24/09/2025.
//

#ifndef ACT1_3_BITACORA_H
#define ACT1_3_BITACORA_H

#include <string>

class Bitacora {
private:
    int mes;
    int dia;
    int hora;
    int minuto;
    int segundo;
    std::string ip;
    std::string mensaje;

public:
    Bitacora(int mes, int dia, int hora, int minuto, int segundo, const std::string& ip, const std::string& mensaje);
    int getMes() const;
    int getDia() const;
    int getHora() const;
    int getMinuto() const;
    int getSegundo() const;
    std::string getIp() const;
    std::string getMensaje() const;
    int getFechaPonderada() const;
    std::string toString() const;
};


#endif //ACT1_3_BITACORA_H