#include "Empleado.h"

Empleado::Empleado(QString cedula, QString nombre, double salario){

    this->cedula = cedula;
    this->nombre = nombre;
    this->salario = salario;

}

Empleado::~Empleado(){

}

QString Empleado::getCedula(){
    return cedula;
}

QString Empleado::getNombre(){
    return nombre;
}

double Empleado::getSalario(){
    return salario;
}

void Empleado::setCedula(QString cedula){
    this->cedula = cedula;
}

void Empleado::setNombre(QString nombre){
    this->nombre = nombre;
}

void Empleado::setSalario(double salario){
    this->salario = salario;
}

