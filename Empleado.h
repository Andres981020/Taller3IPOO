#ifndef EMPLEADO_H
#define EMPLEADO_H
#include<QString>


class Empleado{


private:
    QString cedula;
    QString nombre;
    double salario;


public:
    Empleado(QString cedula, QString nombre, double salario);
    ~Empleado();
    QString getCedula();
    QString getNombre();
    double getSalario();
    void setCedula(QString cedula);
    void setNombre(QString nombre);
    void setSalario(double salario);


};

#endif // EMPLEADO_H
