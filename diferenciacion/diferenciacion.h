#ifndef DIFERENCIACION_H
#define DIFERENCIACION_H

#include <QMainWindow>

namespace Ui {
class diferenciacion;
}

class diferenciacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit diferenciacion(QWidget *parent = 0);
    ~diferenciacion();

private:
    Ui::diferenciacion *ui;
    //declaration of functions

public slots:
    void Procesar();
    void Reinicio();
};


#endif // DIFERENCIACION_H
