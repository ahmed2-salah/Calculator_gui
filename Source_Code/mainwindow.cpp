#include "mainwindow.h"
#include "ui_mainwindow.h"

/*Global variables to store OP1 & OP2 & Operation*/
int OP1;
int OP2;
double result;
char operation;
bool OPflag=false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setText("Itida Calculator");
}


MainWindow::~MainWindow()
{
    delete ui;
}
/*-------------Exit The Application----------------*/
void MainWindow::on_btnExit_released()
{
    QMainWindow::close();
}

/*-------------Clear The Application----------------*/
void MainWindow::on_btnClear_released()
{
    ui->lineEdit->clear();
    OPflag=false;

}

/*-------------Reminder Operation----------------*/
void MainWindow::on_btnReminder_released()
{
    OPflag=true;
    ui->lineEdit->clear();
    //ui->lineEdit->setText(ui->lineEdit->text()+"%");
    operation='%';


}

/*-------------Multiply Operation----------------*/
void MainWindow::on_btnMultiply_released()
{
    OPflag=true;
    ui->lineEdit->clear();
    //ui->lineEdit->setText(ui->lineEdit->text()+"*");
    operation='*';


}

/*-------------Minus Operation----------------*/
void MainWindow::on_btnMinus_released()
{
    OPflag=true;
    ui->lineEdit->clear();
    //ui->lineEdit->setText(ui->lineEdit->text()+"-");
    operation='-';


}

/*-------------Plus Operation----------------*/
void MainWindow::on_btnPlus_released()
{
    OPflag=true;
    ui->lineEdit->clear();
    //ui->lineEdit->setText(ui->lineEdit->text()+"+");
    operation='+';


}

/*-------------Division Operation----------------*/
void MainWindow::on_btnDivide_released()
{
    OPflag=true;
    operation='/';
    ui->lineEdit->clear();
    //ui->lineEdit->setText(ui->lineEdit->text()+"/");



}

/*-------------Equal Operation----------------*/
void MainWindow::on_btnEqual_released()
{
    ui->lineEdit->clear();
    OPflag=false;
    ui->lineEdit->setText(ui->lineEdit->text()+"=");
    switch(operation)
    {
    case '+':
    {
        result =OP1+OP2;
        break;
    }
    case '-' :
    {
        if(OP1>OP2)
        {
            result =OP1 -OP2;
        }
        else
        {
            result =OP2 -OP1;
        }
        break;
    }
    case '*':
    {
        result =OP1*OP2;
        break;
    }
    case '/':
    {
        result =OP1/OP2;
        break;
    }
    case '%':
    {
        result =OP1%OP2;
        break;
    }
    }
    QString StringResult =QString::number(result);
    ui->lineEdit->setText(ui->lineEdit->text()+StringResult);

}

/*-------------Mode change----------------*/
void MainWindow::on_btnMode_released()
{
    ui->lineEdit->clear();
}

/*-------------0 Number----------------*/
void MainWindow::on_btn0_released()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"0");

    QString dataONLineEdit =ui->lineEdit->text();
    if(OPflag==true)
    {
        OP2=dataONLineEdit.toInt();
    }
    else
    {
        OP1=dataONLineEdit.toInt();
    }

}

/*-------------1 Number----------------*/
void MainWindow::on_btn1_released()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"1");
    QString dataONLineEdit =ui->lineEdit->text();
    if(OPflag==true)
    {
        OP2=dataONLineEdit.toInt();
    }
    else
    {
        OP1=dataONLineEdit.toInt();
    }

}

/*-------------2 Number----------------*/
void MainWindow::on_btn2_released()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
    QString dataONLineEdit =ui->lineEdit->text();
    if(OPflag==true)
    {
        OP2=dataONLineEdit.toInt();
    }
    else
    {
        OP1=dataONLineEdit.toInt();
    }

}

/*-------------3 Number----------------*/
void MainWindow::on_btn3_released()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
    QString dataONLineEdit =ui->lineEdit->text();
    if(OPflag==true)
    {
        OP2=dataONLineEdit.toInt();
    }
    else
    {
        OP1=dataONLineEdit.toInt();
    }

}

/*-------------4 Number----------------*/
void MainWindow::on_btn4_released()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
    QString dataONLineEdit =ui->lineEdit->text();
    if(OPflag==true)
    {
        OP2=dataONLineEdit.toInt();
    }
    else
    {
        OP1=dataONLineEdit.toInt();
    }

}

/*-------------5 Number----------------*/
void MainWindow::on_btn5_released()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
    QString dataONLineEdit =ui->lineEdit->text();
    if(OPflag==true)
    {
        OP2=dataONLineEdit.toInt();
    }
    else
    {
        OP1=dataONLineEdit.toInt();
    }

}

/*-------------6 Number----------------*/
void MainWindow::on_btn6_released()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
    QString dataONLineEdit =ui->lineEdit->text();
    if(OPflag==true)
    {
        OP2=dataONLineEdit.toInt();
    }
    else
    {
        OP1=dataONLineEdit.toInt();
    }

}

/*-------------7 Number----------------*/
void MainWindow::on_btn7_released()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
    QString dataONLineEdit =ui->lineEdit->text();
    if(OPflag==true)
    {
        OP2=dataONLineEdit.toInt();
    }
    else
    {
        OP1=dataONLineEdit.toInt();
    }

}

/*-------------8 Number----------------*/
void MainWindow::on_btn8_released()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"8");
    QString dataONLineEdit =ui->lineEdit->text();
    if(OPflag==true)
    {
        OP2=dataONLineEdit.toInt();
    }
    else
    {
        OP1=dataONLineEdit.toInt();
    }

}

/*-------------9 Number----------------*/
void MainWindow::on_btn9_released()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"9");
    QString dataONLineEdit =ui->lineEdit->text();
    if(OPflag==true)
    {
        OP2=dataONLineEdit.toInt();
    }
    else
    {
        OP1=dataONLineEdit.toInt();
    }

}


void MainWindow::on_checkBox_stateChanged(int state)
{
    if (state == Qt::Checked) {

        this->setStyleSheet("background-color: gray;");
    } else {

        this->setStyleSheet("background-color: white;");
    }

}

