#include "Empleadooperativo.h"

EmpleadoOperativo::EmpleadoOperativo(QString cedula, QString nombre, double salario, QString zona): Empleado(cedula, nombre, salario){

    this->zonaTrabajo = zona;

}

EmpleadoOperativo::~EmpleadoOperativo(){

}
QString EmpleadoOperativo::getZonaTrabajo(){
    return zonaTrabajo;

}

void EmpleadoOperativo::setZonaTrabajo(QString zona){
    zonaTrabajo = zona;
}
