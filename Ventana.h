#ifndef VENTANA_H
#define VENTANA_H
#include "Empleado.h"
#include "EmpleadoOficina.h"
#include "EmpleadoOperativo.h"
#include <vector>

#include <QMainWindow>

using std::vector;


namespace Ui {
class Ventana;
}

class Ventana : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ventana(QWidget *parent = 0);
    ~Ventana();

private slots:
    void on_Ingresar_clicked();

    void on_Consultar_clicked();

    void on_Total_clicked();

    void on_Promedio_clicked();

    void on_Limpiar_clicked();

    void on_Salir_clicked();

private:
    Ui::Ventana *ui;
    vector<Empleado*> listaEmpleados;
    vector<EmpleadoOficina*> listaOficina;
    vector<EmpleadoOperativo*> listaOperativo;
    QString curFile;
};

#endif // VENTANA_H
