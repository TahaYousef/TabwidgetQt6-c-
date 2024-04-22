#include "mainwindow.h"
#include "ui_mainwindow.h"
#include  "form.h"

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


void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

void MainWindow::on_pushButton_Add1_clicked()
{
    ui->tabWidget->addTab(new QWidget,"java");
}
void MainWindow::on_pushButton_Add2_clicked()
{
    ui->tabWidget->addTab(new QWidget,QString("tab %0").arg(ui->tabWidget->count()+1));
}


void MainWindow::on_pushButton_Add3_clicked()
{
  ui->tabWidget->addTab(new Form,"java");
}

void MainWindow::on_pushButton_Add4_clicked()
{
 ui->tabWidget->addTab(new Form,QString("tab %0").arg(ui->tabWidget->count()+1));
}

