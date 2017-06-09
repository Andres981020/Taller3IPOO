#include "Ventana.h"
#include "ui_ventana.h"

Ventana::Ventana(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ventana)
{
    ui->setupUi(this);
}

Ventana::~Ventana()
{
    delete ui;
}

void Ventana::on_Ingresar_clicked()
{
    QString clase = ui->claseEmpleado->currentText();

    if(clase == "Empleado Operativo"){

        QString nombre = ui->ObjNombre->text();
        QString cedula = ui->ObjCedula->text();
        double salario = ui->ObjSalario->text().toDouble();
        QString  zona = ui->ObjZona->text();


        EmpleadoOperativo * usuario = new EmpleadoOperativo(nombre, cedula, salario, zona);

        listaOperativo.push_back(usuario);

        ui->ObjNombre->setText("");
        ui->ObjCedula->setText("");
        ui->ObjSalario->setText("");
        ui->ObjZona->setText("");

    }

    if(clase == "Empleado de Oficina"){

        QString nombre = ui->ObjNombre->text();
        QString cedula = ui->ObjCedula->text();
        double salario = ui->ObjSalario->text().toDouble();
        int numEmpleados = ui->ObjNumEmpleados->text().toInt();

        EmpleadoOficina * usuario = new EmpleadoOficina(nombre, cedula, salario, numEmpleados);

        listaOficina.push_back(usuario);


        ui->ObjNombre->setText("");
        ui->ObjCedula->setText("");
        ui->ObjSalario->setText("");
        ui->ObjNumEmpleados->setText("");

    }

}


void Ventana::on_Consultar_clicked(){

    QString clase = ui->claseEmpleado->currentText();
    QString consulta = ui->Consulta->text();
    ui->Consulta->setText("");

    if(clase == "Empleado Operativo"){

    QString salida = "Cedula\tNombre\tSalario\tZona\t\n\n";

    for(int i=0; i< listaOperativo.size();i++){
        if(listaOperativo[i]->getCedula().compare(consulta)){
            salida+=listaOperativo[i]->getNombre()+"\t";
            salida+=listaOperativo[i]->getCedula()+"\t";
            salida+=QString::number(listaOperativo[i]->getSalario())+"\t";
            salida+=listaOperativo[i]->getZonaTrabajo()+"\t\n";

            }
        }
         ui->Salida1->setText(salida);
    }

    if(clase == "Empleado de Oficina"){

        QString salida = "Cedula\tNombre\tSalario\tnumEmpleados\t\n\n";

        for(int i=0; i< listaOficina.size(); i++){
            if(listaOficina[i]->getCedula().compare(consulta)){
                salida+=listaOficina[i]->getNombre()+"\t";
                salida+=listaOficina[i]->getCedula()+"\t";
                salida+=QString::number(listaOficina[i]->getSalario())+"\t";
                salida+=QString::number(listaOficina[i]->getNumEmpleado())+"\t\n";
            }
        }
        ui->Salida1->setText(salida);
    }



}

void Ventana::on_Total_clicked(){

     // QString clase = ui->claseEmpleado->currentText();
     double total=0.0;
     double total1=0.0;
     double total2=0.0;


     for(int i=0; i< listaOperativo.size();i++){
         total1 += listaOperativo[i]->getSalario();
         }


         for(int i=0; i< listaOficina.size(); i++){
             total2 += listaOficina[i]->getSalario();
         }

         total = total1 + total2;
         ui->Salida3->setText(QString::number(total));

}



void Ventana::on_Promedio_clicked(){

    QString file;
    QString clase = ui->claseEmpleado->currentText();
    double promedio=0;
    if(clase == "Empleado Operativo"){
        for(int i=0; i<listaOperativo.size(); i++){
            promedio += listaOperativo[i]->getSalario();
        }
                //file = (QString::number(promedio/listaOperativo.size()));
                ui->Salida2->setText(QString::number(promedio/listaOperativo.size()));
       }
    if(clase == "Empleado de Oficina"){
        for(int i=0; i < listaOficina.size(); i++){
            promedio += listaOficina[i]->getSalario();
        }
        ui->Salida2->setText(QString::number(promedio/listaOficina.size()));
    }
}

void Ventana::on_Limpiar_clicked()
{

    ui->Salida1->clear();
    ui->Salida2->clear();
    ui->Salida3->clear();
}

/*void Interfaz::on_Consultar2_clicked(){

    QString clase = ui->claseEmpleado->currentText();
    QString consulta = ui->Consulta->text();
    ui->Consulta->setText("");

    if(clase == "Empleado Operativo"){

    QString salida = "Cedula\tNombre\tSalario\tZona\t\n\n";

    for(int i=0; i< listaOperativo.size();i++){
        QString aux="";
        aux = listaOperativo[i]->getCedula();
        if(aux.compare(consulta) == 0){
            salida+=listaOperativo[i]->getNombre()+"\t";
            salida+=listaOperativo[i]->getCedula()+"\t";
            salida+=QString::number(listaOperativo[i]->getSalario())+"\t";
            salida+=listaOperativo[i]->getZonaTrabajo()+"\t\n";

            }
        }
         ui->Salida1->setText(salida);
    }

    if(clase == "Empleado de Oficina"){

        QString salida = "Cedula\tNombre\tSalario\tnumEmpleados\t\n\n";

        for(int i=0; i< listaOficina.size(); i++){
            if(listaOficina[i]->getCedula().compare(consulta) == 0){
                salida+=listaOficina[i]->getNombre()+"\t";
                salida+=listaOficina[i]->getCedula()+"\t";
                salida+=QString::number(listaOficina[i]->getSalario())+"\t";
                salida+=QString::number(listaOficina[i]->getNumEmpleado())+"\t\n";
            }
        }
        ui->Salida1->setText(salida);
    }

}*/

void Ventana::on_Salir_clicked(){

   connect(ui->Salir, SIGNAL(clicked()), this, SLOT(close()));

}
