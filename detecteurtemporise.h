#ifndef DETECTEURTEMPORISE_H
#define DETECTEURTEMPORISE_H
#include "detecteur.h"
#include <QTimer>

class DetecteurTemporise : public Detecteur
{
public:
    DetecteurTemporise();

private slots:
    virtual void on_pushButtonIntrus_clicked();
    void onTempo_timeout();
private:
    QTimer timer;
};

#endif
