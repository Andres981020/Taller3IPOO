#ifndef EMPLEADOOPERATIVO_H
#define EMPLEADOOPERATIVO_H
#include<QString>
#include"Empleado.h"

class EmpleadoOperativo: public Empleado{

private:
    QString zonaTrabajo;


public:
    EmpleadoOperativo(QString cedula, QString nombre, double salario, QString zona);
    ~EmpleadoOperativo();


    QString getZonaTrabajo();
    void setZonaTrabajo(QString zona);

};

#endif // EMPLEADOOPERATIVO_H
