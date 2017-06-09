#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "Empleado.h"
#include "EmpleadoOficina.h"
#include "EmpleadoOperativo.h"
#include <vector>

using std::vector;

#include <QMainWindow>

namespace Ui {
class Interfaz;
}

class Interfaz : public QMainWindow
{
    Q_OBJECT

public:
    explicit Interfaz(QWidget *parent = 0);
    ~Interfaz();

private slots:
    void on_Ingresar_clicked();

    void on_Consultar_clicked();

    void on_Total_clicked();

    void on_Promedio_clicked();

    void on_Limpiar_clicked();

    void on_Consultar2_clicked();

    bool on_GuardarP_clicked();

    void on_GuardarT_clicked();

    void on_GuardarP_clicked(bool checked);

private:
    Ui::Interfaz *ui;
    vector<Empleado*> listaEmpleados;
    vector<EmpleadoOficina*> listaOficina;
    vector<EmpleadoOperativo*> listaOperativo;
    QString curFile;

};

#endif // INTERFAZ_H
