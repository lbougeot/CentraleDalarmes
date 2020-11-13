#include "detecteurtemporise.h"
#include <QMessageBox>

DetecteurTemporise::DetecteurTemporise()
{
    setWindowTitle("Détecteur Temporisé");
    connect(&timer,&QTimer::timeout,this,&DetecteurTemporise::onTempo_timeout);
}

void DetecteurTemporise::on_pushButtonIntrus_clicked()
{
    timer.start(3000);
}


void DetecteurTemporise::onTempo_timeout()
{
    QMessageBox messageMarche;
    messageMarche.setText("Un intrus a été détecté");
    messageMarche.exec();
    timer.stop();
}





