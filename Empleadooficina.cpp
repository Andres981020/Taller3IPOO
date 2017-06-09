#include "Empleadooficina.h"

EmpleadoOficina::EmpleadoOficina(QString cedula, QString nombre, double salario, int numEmpleado): Empleado(cedula, nombre, salario){

    this->numEmpleado = numEmpleado;

}

EmpleadoOficina::~EmpleadoOficina(){

}

int EmpleadoOficina::getNumEmpleado(){
    return numEmpleado;
}

void EmpleadoOficina::setNumEmpleado(int numEmpleado){
    this->numEmpleado = numEmpleado;
}
