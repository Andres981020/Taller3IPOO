#ifndef EMPLEADOOFICINA_H
#define EMPLEADOOFICINA_H
#include<QString>
#include"Empleado.h"

class EmpleadoOficina: public Empleado{

private:
     int numEmpleado;


public:
    EmpleadoOficina(QString cedula, QString nombre, double salario, int numEmpleado);
    ~EmpleadoOficina();

    int getNumEmpleado();
    void setNumEmpleado(int numEmpleado);

};

#endif // EMPLEADOOFICINA_H
