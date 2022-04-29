#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(800, 600);
    pushButton = new QPushButton(this);
}

MainWindow::~MainWindow()
{

}
