#include "detecteur.h"
#include "ui_detecteur.h"
#include "clavier.h"

Detecteur::Detecteur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Detecteur)
{
    ui->setupUi(this);
    setWindowTitle("détecteur");

}

Detecteur::~Detecteur()
{
    delete ui;
}

void Detecteur::on_pushButtonIntrus_clicked()
{
    ui->pushButtonIntrus->setText("Intrus détecté");
}
