#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_enter_clicked()
{
    QString texto = ui->pantalla->text();
    if (!texto.isEmpty()) {
        bool ok;
        double valor = texto.toDouble(&ok);
        if (ok) {
            m_engine.pushOperand(valor);
            ui->pantalla->clear();
            updateStackView();
        }
    }
}

