//
// Created by Guest on 24/09/2025.
//

#include "Bitacora.h"

Bitacora::Bitacora(int mes, int dia, int hora, int minuto, int segundo,
                   const std::string& ip, const std::string& mensaje)
    : mes(mes), dia(dia), hora(hora), minuto(minuto), segundo(segundo), ip(ip), mensaje(mensaje) {}

int Bitacora::getMes() const { return mes; }
int Bitacora::getDia() const { return dia; }
int Bitacora::getHora() const { return hora; }
int Bitacora::getMinuto() const { return minuto; }
int Bitacora::getSegundo() const { return segundo; }
std::string Bitacora::getIp() const { return ip; }
std::string Bitacora::getMensaje() const { return mensaje; }

int Bitacora::getFechaPonderada() const {
    return mes * 100000000 + dia * 1000000 + hora * 10000 + minuto * 100 + segundo;
}

std::string Bitacora::toString() const {
    return std::to_string(mes) + " " +
           std::to_string(dia) + " " +
           (hora < 10 ? "0" : "") + std::to_string(hora) + ":" +
           (minuto < 10 ? "0" : "") + std::to_string(minuto) + ":" +
           (segundo < 10 ? "0" : "") + std::to_string(segundo) + " " +
           ip + " " + mensaje;
}