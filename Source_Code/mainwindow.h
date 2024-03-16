#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QLineEdit>
#include <QPushButton>
#include <QPalette>
#include <QString>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnExit_released();

    void on_btnClear_released();

    void on_btnReminder_released();

    void on_btnMultiply_released();

    void on_btnMinus_released();

    void on_btnPlus_released();

    void on_btnDivide_released();

    void on_btnEqual_released();

    void on_btnMode_released();

    void on_btn0_released();

    void on_btn1_released();

    void on_btn2_released();

    void on_btn3_released();

    void on_btn4_released();

    void on_btn5_released();

    void on_btn6_released();

    void on_btn7_released();

    void on_btn8_released();

    void on_btn9_released();

    void on_checkBox_stateChanged(int arg1);

 private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
