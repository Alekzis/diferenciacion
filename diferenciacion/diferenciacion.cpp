#include "diferenciacion.h"
#include "ui_diferenciacion.h"
#include<QString>
#include<cmath>
diferenciacion::diferenciacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::diferenciacion)
{
    ui->setupUi(this);
    // Slots Connections
    connect(ui->Procesar,SIGNAL(clicked()),this,SLOT(Procesar()));
    connect(ui->Reinicio,SIGNAL(clicked()),this,SLOT(Reinicio()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

diferenciacion::~diferenciacion()
{
    delete ui;
}
//development of the execution of the function to process and declare temporary variables, error, backward derivation and other functions of the method.

void diferenciacion::Procesar(){

    QString temp, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12, temp13, temp14, temp15, temp16, temp17, temp18, temp19, temp20, temp21, temp22, temp23, temp24, temp25;
    QString temp26, temp27, temp28, temp29, temp30, temp31, temp32, temp33, temp34, temp35, temp36, temp37, temp38, temp39, temp40, temp41, temp42, temp43, temp44, temp45, temp46, temp47, temp48, temp49, temp50, temp51, temp52, temp53, temp54;

    double f,f1,f2,f3,f4,f5,f_1,f_2,f_3,f_4,f_5;
    double X=ui->x->value();
    double X_1=ui->x_1->value();
    double X_2=ui->x_2->value();
    double X_3=ui->x_3->value();
    double X_4=ui->x_4->value();
    double X_5=ui->x_5->value();
    double X1=ui->x1->value();
    double X2=ui->x2->value();
    double X3=ui->x3->value();
    double X4=ui->x4->value();
    double X5=ui->x5->value();
    double F=ui->f->value();
    double F_1=ui->f_1->value();
    double F_2=ui->f_2->value();
    double F_3=ui->f_3->value();
    double F_4=ui->f_4->value();
    double F_5=ui->f_5->value();
    double F1=ui->f1->value();
    double F2=ui->f2->value();
    double F3=ui->f3->value();
    double F4=ui->f4->value();
    double F5=ui->f5->value();
    double e=ui->h->value();
    double f1c1=0, f2c1=0, f3c1=0, f4c1=0, f1c2=0, f2c2=0, f3c2=0, f4c2=0;
    double deriv=0, deriv2=0, deriv3=0, deriv4=0, deriv5=0, deriv6=0, deriv7=0, deriv8=0;
    double deriv9=0, deriv10=0, deriv11=0, deriv12=0, deriv13=0, deriv14=0, deriv15=0, deriv16=0;
    double error1c1=0, error1c2=0, error2c1=0, error2c2=0, error3c1=0, error3c2=0, error4c1=0, error4c2=0;
    double error=0, error2=0, error3=0, error4=0, error5=0, error6=0, error7=0, error8=0;
    double error9=0, error10=0, error11=0, error12=0, error13=0, error14=0, error15=0, error16=0;

    f1c1=(f1-f_1)/(2*e);
    f1c2=(-(f2)+(8*f1)-(8*f_1)+(f_2))/(12*e);
    f2c1=(f1-(2*f)+f_1)/(e*e);
    f2c2=(-f2+(16*f1)-(30*f)+(16*f_1)-f_2)/(12*(e*e));
    f3c1=(f_2-(2*f1)+(2*f_1)-f_2)/(2*(e*e*e));
    f3c2=(-f3+(8*f2)-(13*f1)+(13*f_1)-(8*f_2)+(f_3))/(8*(e*e*e));
    f4c1=(f2-(4*f1)+(6*f)-(4*f_1)+(f_2))/(e*e*e*e);
    f4c2=(-f3+(12*f2)+(39*f1)+(56*f)-(39*f_1)+(12*f_2)+f_3)/(6*(e*e*e*e));

    error1c1=100*std::abs((f1c1-f1c2)/f1c2);
    error1c2=100*std::abs((f1c1-f1c2)/f1c2);
    error2c1=100*std::abs((f2c1-f1c2)/f1c2);
    error2c2=100*std::abs((f2c1-f1c2)/f1c2);
    error3c1=100*std::abs((f3c1-f1c2)/f1c2);
    error3c2=100*std::abs((f3c2-f1c2)/f1c2);
    error4c1=100*std::abs((f4c1-f1c2)/f1c2);
    error4c2=100*std::abs((f4c2-f1c2)/f1c2);
    //the results are displayed

    temp.append("\nPrimera derivada:").append(temp1.setNum(f1c1)).append("\nPrimera derivada complementada:").append(temp2.setNum(f1c2)).append("\nSegunda derivada:").append(temp3.setNum(f2c1));
    temp.append("\nSegunda derivada complementada:").append(temp4.setNum(f2c2)).append("\nTercera Derivada:").append(temp5.setNum(f3c1)).append("\nTercera derivada complementada:").append(temp6.setNum(f3c2)).append("\nCuarta derivada:").append(temp7.setNum(f4c1)).append("\nCuarta derivada complementada:").append(temp8.setNum(f4c2));
    temp.append("\n\nError en la primera derivada:").append(temp9.setNum(error1c1)).append("\nError en la primera derivada complementada:").append(temp10.setNum(error1c2)).append("\nError en la segunda derivada:").append(temp11.setNum(error2c1)).append("\nError en la segunda derivada complementada:").append(temp12.setNum(error2c2)).append("\nError en la tercera derivada:").append(temp13.setNum(error3c1)).append("\nError en la tercera derivada complementada:").append(temp14.setNum(error3c2)).append("\nError en la cuarta derivada:=").append(temp15.setNum(error4c1)).append("\nError en la cuarta derivada complementada:").append(temp16.setNum(error4c2));

    deriv=(f-f_1)/e;
    deriv2=(f-(2*f_1)+f_2)/(e*e);
    deriv3=(f-(3*f_1)+(3*f_2)-f_3)/(e*e*e);
    deriv4=(f-(4*f_1)+(6*f_2)-(4*f_3)+f_4)/(e*e*e*e);
    deriv5=((3*f)-(4*f_1)+(f_2))/(2*e);
    deriv6=((2*f)-(5*f_1)+(4*f_2)-f_3)/(e*e);
    deriv7=((5*f)-(18*f_1)+(24*f_2)-(14*f_3)+(3*f_4))/(2*(e*e*e));
    deriv8=((3*f)-(14*f_1)+(26*f_2)-(24*f_3)+(11*f_4)-(2*f_5))/(e*e*e*e);

//error calculation

    error=100*std::abs((deriv-f1c2)/f1c2);
    error2=100*std::abs((deriv5-f1c2)/f1c2);
    error3=100*std::abs((deriv2-f1c2)/f1c2);
    error4=100*std::abs((deriv6-f1c2)/f1c2);
    error5=100*std::abs((deriv3-f1c2)/f1c2);
    error6=100*std::abs((deriv7-f1c2)/f1c2);
    error7=100*std::abs((deriv4-f1c2)/f1c2);
    error8=100*std::abs((deriv8-f1c2)/f1c2);

    //the results are displayed

    temp.append("\nDerivada hacia atras:").append(temp17.setNum(deriv)).append("\nPrimera derivada complementada:").append(temp18.setNum(deriv5)).append("\nSegunda derivada:").append(temp19.setNum(deriv2));
    temp.append("\nSegunda derivada complementada:").append(temp20.setNum(deriv6)).append("\nTercera Derivada:").append(temp21.setNum(deriv3)).append("\nTercera derivada complementada:=").append(temp22.setNum(deriv7)).append("\nCuarta derivada:").append(temp23.setNum(deriv4)).append("\nCuarta derivada complementada:").append(temp24.setNum(deriv8));
    temp.append("\n\nError en la primera derivada:").append(temp25.setNum(error)).append("\nError en la primera  derivada complementada:").append(temp26.setNum(error2)).append("\nError en la segunda derivada:").append(temp27.setNum(error3)).append("\nError en la segunda derivada complementada:").append(temp28.setNum(error4)).append("\nError en la tercera derivada:").append(temp29.setNum(error5)).append("\nError en la tercera derivada complementada:").append(temp30.setNum(error6)).append("\nError en la cuarta derivada:").append(temp31.setNum(error7)).append("\nError en la cuarta derivada complementada:").append(temp32.setNum(error8));

    deriv9=(f1-f)/e;
    deriv10=(f2-(2*f1)+f)/(e*e);
    deriv11=(f3-(3*f2)+(3*f1)-f)/(e*e*e);
    deriv12=(f4-(4*f3)+(6*f2)-(4*f1)+f)/(e*e*e*e);
    deriv13=(-f2+(4*f1)-(3*f))/(2*e);
    deriv14=(-f3+(4*f2)-(5*f1)+(2*f))/(e*e);
    deriv15=(-(3*f4)+(14*f3)-(24*f2)+(18*f1)-(5*f))/(2*(e*e*e));
    deriv16=(-(2*f5)+(11*f4)-(24*f3)+(26*f2)-(14*f1)+(3*f))/(e*e*e*e);

//error calculation

    error9=100*std::abs((deriv9-f1c2)/f1c2);
    error10=100*std::abs((deriv13-f1c2)/f1c2);
    error11=100*std::abs((deriv10-f1c2)/f1c2);
    error12=100*std::abs((deriv14-f1c2)/f1c2);
    error13=100*std::abs((deriv11-f1c2)/f1c2);
    error14=100*std::abs((deriv15-f1c2)/f1c2);
    error15=100*std::abs((deriv12-f1c2)/f1c2);
    error16=100*std::abs((deriv16-f1c2)/f1c2);

       //the results are displayed

    temp.append("\nDerivada hacia adelante:").append(temp33.setNum(deriv9)).append("\nPrimera derivada complementada:").append(temp34.setNum(deriv13)).append("\nSegunda derivada:").append(temp35.setNum(deriv10));
    temp.append("\nSegunda derivada complementada=").append(temp36.setNum(deriv14)).append("\nTercera Derivada:").append(temp37.setNum(deriv11)).append("\nTercera derivada complementada:").append(temp38.setNum(deriv15)).append("\nCuarta derivada:").append(temp39.setNum(deriv12)).append("\nCuarta derivada complementada:").append(temp40.setNum(deriv16));
    temp.append("\n\nError en la primera derivada:").append(temp41.setNum(error9)).append("\nError en la primera derivada complementada:").append(temp42.setNum(error10)).append("\nError en la segunda derivada:").append(temp43.setNum(error11)).append("\nError en la segunda derivada complementada:").append(temp44.setNum(error12)).append("\nError en la tercera derivada:").append(temp45.setNum(error13)).append("\nError tercera derivada complementada:").append(temp46.setNum(error14)).append("\nError en la cuarta derivada:").append(temp47.setNum(error15)).append("\nError cuarta derivada complementada:").append(temp48.setNum(error16));
    ui->resultados->setText(temp);
}
//the data is sent to zero to restart

void diferenciacion::Reinicio(){
    ui->x->setValue(0.0);
    ui->x_1->setValue(0.0);
    ui->x_2->setValue(0.0);
    ui->x_3->setValue(0.0);
    ui->x_4->setValue(0.0);
    ui->x_5->setValue(0.0);
    ui->x1->setValue(0.0);
    ui->x2->setValue(0.0);
    ui->x3->setValue(0.0);
    ui->x4->setValue(0.0);
    ui->x5->setValue(0.0);
    ui->f_1->setValue(0.0);
    ui->f_2->setValue(0.0);
    ui->f_3->setValue(0.0);
    ui->f_4->setValue(0.0);
    ui->f_5->setValue(0.0);
    ui->f1->setValue(0.0);
    ui->f2->setValue(0.0);
    ui->f3->setValue(0.0);
    ui->f4->setValue(0.0);
    ui->f5->setValue(0.0);
    ui->f->setValue(0.0);
    ui->h->setValue(0.0);
     ui->resultados->clear();
}
